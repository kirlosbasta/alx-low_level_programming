#include "main.h"

/**
 * print_binary - Convert a number to binary then print it
 * @n: Integer
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		if (n != 1)
		{
			print_binary(n >> 1);
		}
		if (zero_or_one(n) == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else
	{
		_putchar('0');
	}
}

/**
 * zero_or_one - Check the last digit of binary number n if it's 0 or 1
 * @n: Integer
 *
 * Return: 0 or 1
 */

int zero_or_one(unsigned long int n)
{
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
