#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strchr - a program that locates a character in a string
 * @s: string to be used
 * @c: character
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
