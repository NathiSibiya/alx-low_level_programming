#include <stdio.h>
/**
 * main - prints the number from 1-100, but for multiples of three
 * fizz is printed instead of number for multiples of five
 * Buzz for multiples of both three and five, FizzBuzz
 *
 * Return: always 0
 */

int main(void)
{
	int num

	for (num = 1; num <= 100; num++)
	{
	if ((num % 3) == 0 && (num % 5) == 0)
		printf("FizzBuzz");

	else if ((num % 3) == 0)
		printf("Fizz");

	else if ((num % 5) == 0)
		printf("Buzz");

	else
		printf("%d", num);

	if (num == 100)
	continue;
	printf(" ");
	}

	print("\n");

	return (0);
}
