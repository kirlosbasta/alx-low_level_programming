#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, start, end;

	if (!array)
		return (-1);
	step = sqrt(size);
	start = 0;
	end = step;
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	if (array[start] == value)
		return (start);
	while (end < (int)size && array[end] < value)
	{
		if (array[end] == value)
			return (end);
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		if (array[end] < value)
		{
			start = end;
			end += step;
			if (start >= (int)size)
				return (-1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end >= (int)size)
		end = size - 1;
	while (start <= end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
		{
			return (start);
		}
		start++;
	}
	return (-1);
}
