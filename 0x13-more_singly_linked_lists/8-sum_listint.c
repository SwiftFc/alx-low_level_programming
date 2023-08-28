#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data(n) of a "listint_t" linked list
 * @head: pointer of the linked list
 *
 * Return: the sum of all data, otherwise 0 if the lsit is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
