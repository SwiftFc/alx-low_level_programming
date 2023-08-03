#include "main.h"

/**
 * _strncat - a program tah concatenates two strings.
 * @dest: the first string to be used
 * @src: the second string
 * @n: number of byte to concatenate
 * Return: pointer to the resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		continue;

	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
