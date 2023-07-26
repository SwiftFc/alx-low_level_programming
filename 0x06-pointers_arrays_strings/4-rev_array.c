#include "main.h"

/**
 * reverse_array - a program that reverses 
 * the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; (c < (n - 1) / 2); c++)
	{
		b = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = b;
	}
}
