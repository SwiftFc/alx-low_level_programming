#include "lists.h"

/**
 * free_listint - a function that frees "listint_t"
 * @head: pointer
 *
 * Return: Not specified
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
