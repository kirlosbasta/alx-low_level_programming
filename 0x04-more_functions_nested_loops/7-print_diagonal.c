#include "main.h"

/**
 * print_diagonal - print \ n times followed by newline
 * @n: number of \ printed
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (n > i)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar(' ');
		_putchar('\n');
	}
}
