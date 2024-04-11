#include "search_algos.h"


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: Size of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int low, high, bound;

	if (!array)
	{
		return (-1);
	}
	bound = 1;
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		if (array[bound] == value)
		{
			return (bound);
		}
		bound *= 2;
	}
	low = bound / 2;
	if (bound < (int)size)
	{
		high = bound;
	}
	else
	{
		high = size - 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return (binary_search_2(array, low, high, value));
}


/**
 * binary_search_2 - searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: Array of integers
 * @left: lower bound of the array
 * @right: Higher bound of the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array or -1 if not found
 */
int binary_search_2(int *array, int left, int right, int value)
{
	int mid, i;

	if (!array)
	{
		return (-1);
	}
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
