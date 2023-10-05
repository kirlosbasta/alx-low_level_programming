#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Return a pointer to 2 dimensional array of int
 * @width: The size of the second array
 * @height: The size of the first array
 *
 * Return: A pointer to a 2 dimensional array of int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	n = malloc(sizeof(int) * height);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		n[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}

