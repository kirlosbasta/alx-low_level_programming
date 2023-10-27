#include "main.h"

/**
 * flip_bits - Count the number of flips to turn n to m
 * @n: Integer to be flibed
 * @m: Integer to be flibed to
 *
 * Return: Number of flibs
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num1, num2;

	while (n || m)
	{
		num1 = n & 1;
		num2 = m & 1;
		if (num1 != num2)
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
