#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a linked list
 * @index: index of the node which starts at 0
 * @head: pointer to the node
 *
 * Return: nth node, else return NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
