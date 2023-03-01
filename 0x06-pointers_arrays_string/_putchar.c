#include "main.h"
#include <unistd.h>

/**
 * _puchar - writes character c to stdout
 * @c: character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
