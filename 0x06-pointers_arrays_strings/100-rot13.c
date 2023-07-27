#include "main.h"

/**
 * *rot13 - a program that encodes a string using rot13
 * @c: string to be used for encoding
 * Return: string (success)
 */

char *rot13(char *c)
{
	int a;
	int b;

	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; rot1[b] != '\0'; b++)
		{
			if (c[a] == rot1[b])
			{
				c[a] = rot2[b];
				break;
			}
		}
	}

	return (c);
}
