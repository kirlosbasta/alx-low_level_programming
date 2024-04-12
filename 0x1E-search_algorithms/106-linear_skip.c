#include "search_algos.h"


/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the node where value is located or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *low, *high;

	if (!list)
	{
		return (NULL);
	}
	low = high = list;
	while (high && high->n < value)
	{
		low = high;
		if (high->express)
		{
			high = high->express;
		}
		else
		{
			while (high->next)
			{
				high = high->next;
			}
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
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
