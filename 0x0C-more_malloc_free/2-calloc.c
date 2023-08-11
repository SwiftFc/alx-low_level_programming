#include "main.h"

/**
 * _calloc - a function that allocates memory of an array using malloc
 * @nmemb: the number of elements in array
 * @size: the size of elements of array
 * Return: NULL is size || nmemb == 0
 * NULL if malloc fails
 * Pointer to memory allocated if it is successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		*((char *)(ptr) + x) = 0;
	}

	return (ptr);
}
