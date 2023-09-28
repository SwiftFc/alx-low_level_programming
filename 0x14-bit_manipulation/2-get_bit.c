#include "main.h"

/**
 * get_bit - a program that returns the value of a bit at a given index
 * @n: string
 * @index: is the index, starting from "0" of the bit you want to get
 *
 * Return: the value of the bit at index "index" or
 * "-1" if an error occured
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  bitmask = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << index;

	return ((n & bitmask) ? 1 : 0);
}
