#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 and 1, Error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int b;

		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (!isdigit(argv[i][b]))
			{
				printf("Error\n");
				return (0);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
