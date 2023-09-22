#include "main.h"

/**
 * print_number - print the number n
 * @n: integer
 * Return Nothing
 */

void print_number(int n)
{
	int num = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	while (num / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		_putchar(num / div + '0');
		num %= div;
		div /= 10;
	}
}
