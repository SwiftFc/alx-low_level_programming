#include "3-calc.h"

/**
 *main - entry point
 *@argc: the argument count
 *@argv: the argument vector
 *Return: the integer
 */

int main(int argc, char *argv[])
{
	int (*oput)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oput = get_op_func(argv[2]);
	if (!oput)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oput(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
