#include "lists.h"

/**
 * pop_listint - a program to delete the head node
 * of a "listint_t" linked list
 * @head: pointer to the head node
 *
 * Return: The data in the head node,
 * else return 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;/*store the data of the head node*/
	temp = *head;/*store the head node*/
	*head = (*head)->next;/*now move to the next node*/
	free(temp);/*free the memory*/

	return (n);
}
