#include "main.h"

/**
 * get_bit - gets a value of a bit
 * @n: the bit
 * @index: index toge value at
 *
 * Return: if error - -1, esle the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

