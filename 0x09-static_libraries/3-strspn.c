#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: bytes
 * @accept: bytes to be used
 * Return: number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c;

	while (s[a] != '\0')
	{
		c = 0;
		while (accept[c] != '\0')
		{
			if (s[a] == accept[c])
			{
				b++;
				break;
			}
			c++;
		}
		if (accept[c] == '\0')
			break;
		a++;
	}
	return (b);
}
