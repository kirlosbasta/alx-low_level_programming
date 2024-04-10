#include "search_algos.h"


/**
 * linear_search - implementation of linear search
 * @array: Array of integer
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: The index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
