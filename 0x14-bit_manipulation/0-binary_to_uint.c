#include "main.h"

/**
 * binary_to_uint - a function that convert a binary number
 * to an "unsigned int"
 * @b: A pointer to the string of '0' and '1' chars
 *
 * Return: The converted number, or '0' if
 * there is one or more chars in the string 'b'
 * that is not 0 or 1. 'b' is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0')
		{
			result = result * 2;
		}
		else if (b[x] == '1')
		{
			result = result * 2 + 1;
		}
		else
			return (0);
	}

	return (result);
}
