#include "main.h"

/**
 * count_word - a function to help count the number of words in a string
 * @s: string to be used
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, j, m;

	flag = 0;
	m = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			m++;
		}
	}

	return (m);
}



/**
 * **strtow - a function that splits a string into words
 * @str: string to be used
 * Return: a pointer to an array of strings, or NULL if it fails
 */

char **strtow(char *str)
{
	int i, k = 0;
	int len = 0, words, j = 0;
	int start, end;
	char **matrix, *tmp;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
