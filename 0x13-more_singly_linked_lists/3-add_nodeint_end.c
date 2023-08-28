#include "lists.h"

/**
 * add_nodeint_end - a function that adds
 * a new node at the end of "listint_t"
 * @n: value of new node to be added
 * @head: pointer to the new node
 *
 * Return: the address of the new element,
 * else NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
