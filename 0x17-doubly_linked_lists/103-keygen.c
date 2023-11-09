#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Our main function to generate and print passwords
 * for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *crack;
	int len = strlen(argv[1]), i, tmp;

	crack = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = crack[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	password[1] = crack[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	password[2] = crack[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	password[3] = crack[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	password[4] = crack[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	password[5] = crack[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
