#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max inclusive
 * @min: Minmum value
 * @max: Maximum value
 *
 * Return: Pointer to the array or NULL in failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int v, i;

	if (min > max)
	{
		return (NULL);
	}
	v = max - min + 1;
	arr = malloc(sizeof(int) * v);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < v; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
