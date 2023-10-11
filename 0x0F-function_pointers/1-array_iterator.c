#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Iterate through an array of size size and execute action
 * @array: Array of int
 * @size: Size of array
 * @action: function to perform an action on the element
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
