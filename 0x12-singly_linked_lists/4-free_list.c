#include "lists.h"

/**
 * free_list - a function that frees a `list_t` list
 * @head: Pointer to the first node of the list.
 *
 * Return: Not specified
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
