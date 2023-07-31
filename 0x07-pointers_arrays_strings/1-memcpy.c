#include "main.h"
#include <stdlib.h>

/**
 * *_memcpy - a fuction that copies memory area
 * @n: bytes to use
 * @src: source of memory area
 * @dest: destination of memory area
 * @Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}

	return (dest);
}
