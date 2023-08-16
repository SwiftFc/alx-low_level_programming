#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @f: pointer function
 * @name: name of the person
 * Return: Not specified
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
