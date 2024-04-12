#include "search_algos.h"
#include <math.h>


/**
 * jump_list - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @list: list of integers
 * @size: Size of the list
 * @value: Value to search for
 *
 * Return: Index of the value in the list or -1 if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low, *high;
	int step, i;

	if (!list || size == 0)
	{
		return (NULL);
	}
	step = sqrt(size);
	low = list;
	high = list;
	while (high->index < size - 1 && high->n < value)
	{
		low = high;
		for (i = 0; i < step; i++)
		{
			if (high->next)
			{
				high = high->next;
			}
		}
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		if (high->n == value)
		{
			return (high);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	low->index, high->index);
	while (low->index <= high->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
		if (low->next)
			low = low->next;
		else
			return (NULL);
	}
	return (NULL);
}
