#include <stdio.h>

/**
* main - prints the number of arguments
* @argc: the number of argumens supplied to the program
* @argv: an array of pointers to the arguments
*
* Return: 0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
