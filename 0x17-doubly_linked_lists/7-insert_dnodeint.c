#include "lists.h"

/**
 * insert_dnodeint_at_index -  a function that inserts a new node
 * at a given position
 * @h: Pointer to the starting point of the dlistint list
 * @idx: The index position to insert the new node
 * @n: The integer for the new node to contain
 *
 * Return: the address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
