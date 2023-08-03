#include "main.h"
#include <string.h>


/**
 * _strlen_recursion - get the length of the string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * is_palindrome_checker - a function to check
 * if the given string is a palindrome
 * @s: string to be used
 * @start: string
 * @stop: string
 * Return: 1 otherwise 0 if not a palindrome
 */

int is_palindrome_checker(char *s, int start, int stop)
{
	if (start >= stop)
	{
		return (1);
	}
	if (s[start] != s[stop])
	{
		return (0);
	}
	return (is_palindrome_checker(s, start + 1, stop - 1));
}


/**
 * is_palindrome - a function that check
 * if a string is a palindrome
 * @s: string
 * Return: 1 otherwise 0 if not palindrome
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_checker(s, 0, length - 1));
}
