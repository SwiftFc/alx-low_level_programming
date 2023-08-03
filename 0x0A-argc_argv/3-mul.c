#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiples two numbers
 * you can assume that the two numbers and results
 * can be stored in an integer
 * @argc: argument count
 * @argv: argument vector
 * Return: Error if two argument are not passed and return 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
