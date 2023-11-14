#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - a program that locates a substring
 * @needle: substring to be used
 * @haystack: string containing substring
 * Return: pointer to NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	a = 0;
	c = 0;
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b + c] != '\0' && haystack[a + c] != '\0'
		       && needle[b + c] == haystack[a + c])
		{
			if (haystack[a + c] != needle[b + c])
				break;
			c++;
		}
		if (needle[b + c] == '\0')
			return (&haystack[a]);
		b++;
		a++;
	}

	return (NULL);
}
