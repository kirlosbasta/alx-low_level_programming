#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n element of array
 * @a: Pointer to array
 * @n: Number of element to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
