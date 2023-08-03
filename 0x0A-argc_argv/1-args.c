#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("Number of arguments: %d\n", argc - 1);

	return (0);
}
