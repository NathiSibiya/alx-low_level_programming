#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Nothing
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + num++);
	if (num == 9)
		continue;
	putchar(',');
	putchar(' ');

	putchar('\n');
	return (0);
}

