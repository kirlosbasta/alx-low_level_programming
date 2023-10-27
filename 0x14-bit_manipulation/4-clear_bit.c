#include "main.h"

/**
 * clear_bit - Unset a bit at index to 0
 * @n: Pointer to int
 * @index: The index
 *
 * Return: 1 on succes and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
