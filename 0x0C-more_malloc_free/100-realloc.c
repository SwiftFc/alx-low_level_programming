#include "main.h"

/**
 * *_realloc - a function to reallocate a memory block using malloc and free
 * @ptr: the pointer to the memory
 * @old_size: the size of the allocated memory for ptr
 * @new_size: the new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *ptr2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	ptr2 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = ptr2[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = ptr2[x];
	}

	free(ptr);
	return (ptr1);
}
