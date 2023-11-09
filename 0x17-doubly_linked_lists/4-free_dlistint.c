#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to the start of the node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
