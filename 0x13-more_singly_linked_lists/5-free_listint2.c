#include "lists.h"

/**
 * free_listint2 - a function that frees a "listint_t" list
 * @head: pointer
 *
 * Return: Not specified
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
