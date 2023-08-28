#include "lists.h"
#include <stddef.h>

/**
 * listint_len - a function that returns
 * the number of elements in a linked `listint_t`
 * @h: pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
