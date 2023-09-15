#include "main.h"

/**
 * print_square - print square using hash symbole
 * @size: the number of #
 * Description: the square should be with the same height and width
 * Return: always 0
 */
void print_square(int size)
{
	int i = 0;
	int j;

	while (size > i)
	{
		j = 0;
		while (size > j)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
