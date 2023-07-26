#include "main.h"

/**
 * *string_toupper - a program that changes all
 * lowercase letters of a string to uppercase
 * @a: string to be used
 * Return: character
 */

char *string_toupper(char *a)
{
	int h;

	for (h = 0; a[h] != '\0'; h++)
	{
		if (a[h] > 96 && a[h] < 123)
		{
			a[h] -= 32;
		}
	}
	return (a);
}
