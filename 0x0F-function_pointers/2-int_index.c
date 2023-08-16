#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: the number of elements in the array
 * @array: array function to be executed
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0, If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (x = 0; x < size; x++)
			if (cmp(array[x]) != 0)
				return (x);
	}
	return (-1);
}
