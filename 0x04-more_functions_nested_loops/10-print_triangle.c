#include "main.h"

/**
 * print_triangle - print a triangle using #
 * @size: the size of the triangle base
 * Return: always 0
 */
void print_triangle(int size)
{
	int i = 0;
	int j, n;

	while (size > i)
	{
		j = size - 1;
		while (j  > i)
		{
			_putchar(' ');
			j--;
		}
		for (n = 0; n <= j; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
