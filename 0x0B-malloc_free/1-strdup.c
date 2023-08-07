#include "main.h"
#include <string.h>

/**
 * *_strdup - a function that returns a pointer,
 *  to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string to use
 *  Return: a pointer to the duplicated string, NULL if memory was insufficient
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	return (NULL);

	duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
