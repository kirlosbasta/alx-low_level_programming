#include "main.h"

/**
 * _pow_recursion - Get the value of x rasied to the power of y
 * @x: The base number
 * @y: The power rasied to x
 * Return: the value of the x rasied to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
