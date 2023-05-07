#include "main.h"

/**
 * set_bit - sets the value of bit
 * @n: pointer to bit
 * @index: index to et the value at
 *
 * Return: if error - -1, else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

