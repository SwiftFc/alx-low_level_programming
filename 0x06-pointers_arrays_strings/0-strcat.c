#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i, f;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (f = 0; src[f] != '\0'; f++)
	{
		dest[i] = src[f];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
