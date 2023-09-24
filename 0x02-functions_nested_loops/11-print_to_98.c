#include <stdio.h>

/**
 * print_to_98 - Prints number
 * @n: integer
 *
 * Description: prints the until reaches 98
 * if n more than 98 substract until reach 98
 * if n less than 98 add until reach 98
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
