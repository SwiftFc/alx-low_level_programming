#include "function_pointers.h"

/**
 * array_iterator - a program that executes a function
 *  given as a parameter on each element of an array.
 *  @size: size of the array
 *  @action: pointer to the function to be used
 *  @array: array to be used for execution
 *  Return: Not specified
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
