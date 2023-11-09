#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to the dlistint_t list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
