#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to list_t list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node;

	for (num_node = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		num_node++;
	}

	return (num_node);
}
