#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 and 1, if arguments passed is not exactly 1 show Error
 */
int main(int argc, char *argv[])
{
	int cents, money = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		money += 1;
	}
	printf("%d\n", money);
	return (0);
}
