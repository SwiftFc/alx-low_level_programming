#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer
 *  to a 2 dimensional array of integers.
 *  @width: width
 *  @height: height
 *  Return: pointer to a 2 dimensional array, NULL upon failure
 */

int **alloc_grid(int width, int height)
{
	int **di;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	di = malloc(sizeof(int *) * height);

	if (di == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		di[a] = malloc(sizeof(int) * width);

		if (di[a] == NULL)
		{
			for (; a >= 0; a--)
				free(di[a]);

			free(di);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			di[a][b] = 0;
	}

	return (di);
}
