#include "main.h"

/**
 * binary_to_uint - A function that convert a binary number
 * to an "unsigned int"
 * @b: A pointer to the string of '0' and '1' chars
 *
 * Return: The converted number, or '0' if
 * there is one or more chars in the string 'b'
 * that is not 0 or 1. 'b' is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] == '0')
		{
			result = result * 2;
		}
		else if (b[p] == '1')
		{
			result = result * 2 + 1;
		}
		else
			return (0);
	}

	return (result);
}
