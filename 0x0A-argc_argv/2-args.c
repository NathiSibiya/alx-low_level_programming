#include <stdio.h>

/**
* main - prints the arguments it recives
* @argc: the number of argumets supplied to the program
* @argv: an array of pointers to the arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
