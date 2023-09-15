#include "main.h"

/**
 * print_diagonal - print \ n times followed by newline
 * @n: number of \ printed
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
