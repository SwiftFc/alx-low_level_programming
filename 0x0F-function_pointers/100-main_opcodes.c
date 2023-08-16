#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints its own opcodes
 * @argv: argument vector to be counted
 * @argc: argument count to be counted
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	int x;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)main;

	for (x = 0; x < num_bytes; x++)
	{
		if (x == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[x]);
			break;
		}
		printf("%02hhx ", main_ptr[x]);
	}



	return (0);
}
