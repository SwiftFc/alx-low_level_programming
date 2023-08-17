#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @n: number of integer
 * @separator: string to be printed between numbers
 *
 * Return: print numbers,
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);

		printf("%d", value);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
