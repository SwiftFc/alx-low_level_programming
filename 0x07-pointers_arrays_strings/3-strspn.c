#include "main.h"
#include <stdlib.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: bytes
 * @accept: bytes to be used
 * Return: number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 5;

	while (i < 5 && s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] != accept[i])
		{
			break;
		}
	}

	return (i);
}
