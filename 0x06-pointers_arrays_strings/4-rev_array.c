#include "main.h"

/**
 * reverse_array - rev the content of am array of integers
 * @a: the array of integers to be rev
 * @n: the number of elemants in the array
 */

void reverse_array(int *a, int n)
{

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
