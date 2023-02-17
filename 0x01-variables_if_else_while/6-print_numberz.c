#include <stdio.h>
/**
 * main - not allowed to use variable type char and function printf and puts.
 *
 * Return: Nothing
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
