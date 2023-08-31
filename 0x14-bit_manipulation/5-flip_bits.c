#include "main.h"

/**
 * flip_bits - a function that counts the number of bits
 * to be flipped to get from one number to another
 * @n: The number to be used
 * @m: The number to flip "n"
 *
 * Return: The number of bits to be flipped to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ret = n ^ m, bits = 0;

	while (ret > 0)
	{
		bits += (ret & 1);
		ret >>= 1;
	}

	return (bits);
}
