#include "main.h"

/**
 *array_range - a function to create an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to newly created array
 *NULL if malloc fails &&  if min > max.
 */

int *array_range(int min, int max)
{
	int rng;
	int i;
	int *ptr;

	rng = 0;

	if (min > max)
		return (NULL);

	rng = ((max + 1) - min);

	ptr = malloc(rng * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < rng; i++)
	{
		*(ptr + i) = min + i;
	}

	return (ptr);
}
