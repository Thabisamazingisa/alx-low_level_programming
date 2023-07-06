#include "main.h"

/**
 * get_bit - rreturns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit to get
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

