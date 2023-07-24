#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
