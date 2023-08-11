#include "main.h"

/**
 * *malloc_checked - a function that allocates a memory using 'malloc'
 * @b: integer to be used
 *
 * Return: a pointer to the allocated memory,
 * if it fails show a status value `98`
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
