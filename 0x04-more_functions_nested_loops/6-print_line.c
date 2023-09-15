#include "main.h"
/**
 * print_line - Print _ numbers of n
 * @n: number of the underscore printed
 * Return: always 0
 */
void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchat('_');
		i++;
	}
	_putchar('\n');
}
