#include "main.h"

/**
 * factorial - Return the Factorial of a number
 * @n: A positive or 0 number
 * Return: The factourial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
