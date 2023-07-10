#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, results = 1, count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
		count++;
		results = write(file, text_content, count);
	}

		if (results == -1)
			return (-1);
		close(file);
		return (1);
}
