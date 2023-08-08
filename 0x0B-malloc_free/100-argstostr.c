#include "main.h"

/**
 * *argstostr -  a function that concatenates
 * all the arguments of your program
 * @ac: string to be used
 * @av: another string to be used
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c;
	int d;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
