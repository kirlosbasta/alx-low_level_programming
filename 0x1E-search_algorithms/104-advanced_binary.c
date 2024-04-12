#include "search_algos.h"


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm (recursive)
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}
	return (advanced_binary_2(array, 0, (int) size - 1, value));
}


/**
 * advanced_binary_2 - searches for a value in a sorted array of integers
 * using the Binary search algorithm (recursive)
 * @array: pointer to the first element of the array to search in
 * @left: Lower end of the array
 * @right: Upper end of the array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
 */
int advanced_binary_2(int *array, int left, int right, int value)
{
	int i, mid;

	if (!array)
	{
		return (-1);
	}
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
		if (array[mid - 1] == value)
		{
			return (advanced_binary_2(array, left, mid, value));
		}
		return (mid);
	}
	if (left >= right)
	{
		return (-1);
	}
	if (array[mid] < value)
	{
		return (advanced_binary_2(array, mid + 1, right, value));
	}
	else
	{
		return (advanced_binary_2(array, left, mid, value));
	}
}
