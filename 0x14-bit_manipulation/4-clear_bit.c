#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: pointer to the bit
 * @index: index to set the value at
 *
 * Return: if error - -1, else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

