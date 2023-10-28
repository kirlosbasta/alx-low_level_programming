#include "main.h"

/**
 * get_endianness - Check if a system Big endianness or littel endiannes
 *
 * Return: 1 if littel endiannes and 0 if Big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
