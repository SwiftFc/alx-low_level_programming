#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string
 * for any of a set of byte
 * @s: string
 * @accept: second string
 * Return: a pointer to @s taht matches @accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
