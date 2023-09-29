#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: An integer
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - help the fuction _sqrt_recursion
 * @n: The value of n
 * @i: The new value of n
 * Return: The square of n
 */

int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (helper(n, i + 1));
	}
}
