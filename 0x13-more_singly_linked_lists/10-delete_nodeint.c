#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at "index"
 * of a "listint_t" linked list
 * @head: pointer to the head of a linked list
 * @index: index of the node that should be deleted, "index" start at 0
 *
 * Return: 1 if success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index - 1)
		{
			if (current->next != NULL)
			{
				listint_t *temp = current->next;

				current->next = temp->next;
				free(temp);
				return (1);
			}
			break;
		}
		current = current->next;
		count++;
	}
	return (-1);
}
