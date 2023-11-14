#include "main.h"

/**
 * *_strncpy - a program that copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of chars to copy from `src` to `dest`
 * Return: pointer to the resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
