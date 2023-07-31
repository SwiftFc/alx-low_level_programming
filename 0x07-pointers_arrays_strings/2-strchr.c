#include "main.h"

/**
 * *_strchr - a program that locates a character in a string
 * @s: string 
 * @c: character
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
