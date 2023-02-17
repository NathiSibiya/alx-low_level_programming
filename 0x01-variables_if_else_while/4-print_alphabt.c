#include <stdio.h>

/**
 * main - it prints the alphabet in lowercase except q and e.
 *
 * Return: nothing
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	if (letter != 'q' && letter != 'e')
		putchar(letter);

	putchar('\n');
	return (0);
}
