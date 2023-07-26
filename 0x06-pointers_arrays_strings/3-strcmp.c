#include "main.h"

/**
 * _strcmp - a program that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: (0)
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a++)
		continue;
	for (b = 0; s2[b] != '\0'; b++)
	{
		if (s1[a] != s2[b])
			return (s1[a] - s2[b]);
	}
	return (0);
}
