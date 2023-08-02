#include "main.h"

/**
 * _sqrt_help - a function to solve the recursive calculation
 * @n: value to be utilised
 * @x: to determine the square root
 * Return: -1 if @n does not have a natural square root
 */
int _sqrt_help(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_help(n, x + 1));
}


/**
 * _sqrt_recursion - write a function that prints
 * the natural square root of a number
 * @n: value to be utilised
 * if @n does not have a natural square root
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
	return (0);
	}
	return (_sqrt_help(n,1));
}
