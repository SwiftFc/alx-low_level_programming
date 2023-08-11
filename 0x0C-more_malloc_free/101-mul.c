#include "main.h"

/**
 * _print - a function that moves a string to one place
 * @str: the string to be used
 * @l: size of string
 * Return: void
 */

void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - a function to multiply a char
 * @n: the char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: the pointer to dest,show NULL on failure
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int b, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (b = num_index, k = dest_index; b >= 0; b--, k--)
	{
		mul = (n - '0') * (num[b] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - a function to check the argument
 * to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if && 1 if not
 */

int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - a function to initialize a string
 * @str: the string to initialize
 * @l: the length of string
 * Return: void
 */

void init(char *str, int l)
{
	int a;

	for (a = 0; a < l; a++)
		str[a] = '0';
	str[a] = '\0';
}

/**
 * main - multiplies
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: zero || exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, x;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, x = 0; ti >= 0; ti--, x++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - x);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
