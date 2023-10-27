#include "main.h"

/**
 * get_bit - Get the bit a given index
 * @index: Index
 * @n: An integer
 *
 * Return: The bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if ((n & 1 << index) > 0)
	{
		return (1);
	}
	else if ((n & 1 << index) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
