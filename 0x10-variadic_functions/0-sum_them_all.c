#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: string to be used
 *
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int value;
	va_list args;
	unsigned int i;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
	sum += value;
	}

	va_end(args);

	return (sum);
}
