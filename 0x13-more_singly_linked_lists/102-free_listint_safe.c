#include "lists.h"

/**
 * free_listint_safe - a function that frees a "listint_t" list
 * and set the head to null
 * @h: A double pointer to head linked list
 *
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
