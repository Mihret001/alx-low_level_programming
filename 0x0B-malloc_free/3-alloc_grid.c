#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: z or NULL
 */
int **alloc_grid(int width, int height)
{
	int **z;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	z = malloc(height * sizeof(int *));
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		z[x] = malloc(width * sizeof(int));
		if (z[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(z[x]);
			free(z);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			z[x][y] = 0;

	return (z);
}
