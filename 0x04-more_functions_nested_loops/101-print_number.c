#include "main.h"

/**
 * print_number - print the number using _putchar
 * @n: integer to print
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int ui = n;
	int m = 1;
	int j;
/*checks if n is negative number*/
	if (n < 0)
	{
		ui =  -n;
		_putchar('-');
	}
/*get the multiplycation of 10*/
	while (ui / m > 9)
	{
		m *= 10;
	}
/*print the first digit and so on*/
	while (m != 0)
	{
		j = ui / m;
		_putchar(j + '0');
		ui %= m;
		m /= 10;
	}
}
