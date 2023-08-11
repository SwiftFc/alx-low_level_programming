#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte to be allocate @s2
 * Return: a pointer to allocated space in memory,
 * NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int strlen1, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	ptr = malloc((strlen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0, y = 0; x < strlen1; x++)
	{
		if (x < strlen1)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[y++];
	}
	ptr[x] = '\0';

	return (ptr);
}



/**
 * _strlen - a function to find the length of string
 * @s: string to be used
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
