#include "main.h"

/**
 * is_prime_number_checker - a function to check if a number is a prime number
 * @n: integer to be utilised
 * @p: divisor integer to check divisibility
 * Return: 1 if it is prime, otherwise return 0 if not prime
 */

int is_prime_number_checker(int n, int p)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % p == 0)
	{
		return (0);
	}
	if (p * p > n)
		return (1);
	return (is_prime_number_checker(n, p + 1));
}


/**
 * is_prime_number - Write a function that returns 1
 *  if the input integer is a prime number, otherwise return 0
 *  @n: integer to be utilised
 *  Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime_number_checker(n, 2));
}
