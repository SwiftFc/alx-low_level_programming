#include "lists.h"

/**
 * print_dlistint - a function that prints all elements
 * of a dlistint_t list
 * @h: pointer to the node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
