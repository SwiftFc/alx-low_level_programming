#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_diagsums - a program that prints the sum of the two
 *diagonals of a square matrix of integers
 *@size: array size
 *@a: matrix to be used
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, c, d, e = 0, f = 0;

	for (b = 0; b < size; b++)
	{
		d = (b * size) + b;
		e += *(a + d);
	}
	for (c = 0; c < size; c++)
	{
		d = (c * size) + (size - 1 - c);
		f += *(a + d);
	}
	printf("%i, %i\n", e, f);
}
