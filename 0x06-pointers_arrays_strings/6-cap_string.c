#include "main.h"

/**
 * *cap_string - a program that capitalizes
 * all words of a string
 * @c: the string to be used
 * Return: *c
 */

char *cap_string(char *c)
{
	int i = 0, h;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
				*(c + i) -= 'a' - 'A';
			else
			{
				for (h = 0; h <= 12; h++)
				{
					if (a[h] == *(c + h - 1))
						*(c + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (c);
}
