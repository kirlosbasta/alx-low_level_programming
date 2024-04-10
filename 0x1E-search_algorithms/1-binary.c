#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (!array)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
