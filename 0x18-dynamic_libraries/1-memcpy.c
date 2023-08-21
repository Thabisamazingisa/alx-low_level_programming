#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes
 * @src: memory where is copied
 * @dest: destination whre is stored
 *
 * Return: copied memor with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
