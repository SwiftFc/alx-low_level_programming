#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - a program that prints a chessboard
 * @a: character to be printed
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}

		_putchar('\n');
	}
}
