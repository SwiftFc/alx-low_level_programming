#include "lists.h"

/**
 * print_listint - a function that prints all
 * elements of a `listint_t`
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
