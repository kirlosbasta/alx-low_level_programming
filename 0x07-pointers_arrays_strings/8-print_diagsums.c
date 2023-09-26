#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the twocdiagonals of a square matrix
 * @a: pointer to two dimensial array
 * size: the size of the square
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = (size * size) - size;
	unsigned int first = 0, second = 0;

	while (i < (size * size) && j > 0)
	{
			first += a[i];
			second += a[j];
			i += size + 1;
			j -= size - 1;
	}
	printf("%u, %u\n", first, second);
}
