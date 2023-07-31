#include "main.h"

/**
 *set_string - a program that sets the value of a pointer to a char
 *@to: the string for changing the pointer
 *@s: string used
 *Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
