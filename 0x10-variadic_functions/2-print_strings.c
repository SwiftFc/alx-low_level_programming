#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: not specified
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *put;
	unsigned int i;
	va_list prints;

	va_start(prints, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		put = va_arg(prints, char*);
		if (put == NULL)
			put = "(nil)";
		printf("%s", put);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prints);
}
