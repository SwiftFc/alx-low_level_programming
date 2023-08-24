#include "lists.h"

/**
 * add_node - a program that adds a  new node
 * to the beginning of a line
 * @str: string to be used
 * @head: points to the first node
 * Return: The address of the new element,
 * or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
