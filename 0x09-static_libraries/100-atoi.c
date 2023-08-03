#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: char array string
 * Description: The number in the string can be preceded by an infinite
 * number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, then return 0.
 * No need to check for overflow
 * not allowed to declare new variables of “type” array.
 * You are not allowed to hard-code special values.
 * Return: first integer found in the string
 */

int _atoi(char *s)
{
	int i;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
