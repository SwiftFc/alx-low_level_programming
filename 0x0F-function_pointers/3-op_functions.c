#include "3-calc.h"

/**
 * op_add - struct op
 * @a: operator
 * @b: char
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * @a: operator
 * @b: char
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * @a: operator
 * @b: char
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * @a: operator
 * @b: char
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry point
 * @a: operator
 * @b: char
 * Return: integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
