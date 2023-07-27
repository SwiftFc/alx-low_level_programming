#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a program that prints a buffer
 * @b: print buffer
 * @size: buffer size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int e, f, g;

	if (size <= 0)
		printf("\n");
	else
	{
		for (e = 0; e < size; e += 10)
		{
			printf("%.8x:", e);
			for (f = e; f < e + 10; f++)
			{
				if (f % 2 == 0)
					printf(" ");
				if (f < size)
					printf("%.2x", *(b + f));
				else
					printf("  ");
			}
			printf(" ");
			for (g = e; g < e + 10; g++)
			{
				if (g >= size)
					break;
				if (*(b + g) < 32 || *(b + g) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + g));
			}
			printf("\n");
		}
	}
}
