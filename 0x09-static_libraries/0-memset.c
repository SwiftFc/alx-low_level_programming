#include "main.h"
#include <stdlib.h>

/**
 * *_memset - a function that fills memory
 * with a constant byte
 * @n: bytes of the memory area pointed to by `s`
 * @s: memory area
 * @b: constant byte
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
