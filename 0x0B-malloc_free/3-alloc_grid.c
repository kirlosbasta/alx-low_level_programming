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
	n = (int **) malloc(sizeof(int *) * height);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = (int *) malloc(sizeof(int) * width);
		if (n[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				n[i][j] = 0;
			}
		}
		else
		{
			while (i >= 0)
			{
				free(n[i]);
				i--;
			}
			free(n);
			return (NULL);
		}
	}
	return (n);
}

