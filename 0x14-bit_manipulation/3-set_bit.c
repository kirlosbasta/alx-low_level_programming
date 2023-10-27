#include "main.h"

/**
 * set_bit - Set the bit at index to 1
 * @n: Pointer to int
 * @index: Index to be set
 *
 * Return: 1 in success and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
