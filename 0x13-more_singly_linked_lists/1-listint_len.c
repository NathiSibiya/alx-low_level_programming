#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elements;

	for (num_elements = 0; h != NULL; num_elements++)
	{
		h = h->next;
	}

	return (num_elements);
}
