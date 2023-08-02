#include "main.h"

/**
 * factorial - write a function that returns the
 * factorial of a given number
 * @n: variable to be used
 * if @n is lower than 0 return -1
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
