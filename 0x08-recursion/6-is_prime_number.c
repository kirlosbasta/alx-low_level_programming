#include "main.h"

/**
 * is_prime_number - Checks if an integer is prime number
 * @n: An integer to check
 * Return: 1 if n is prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int j = prime_number(n, 2);

	if (n == j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * prime_number - Helps is_prime_number
 * @n: An integer to check
 * @i: An integer 
 * Return: The first prime number
 */

int prime_number(int n, int i)
{
	if (n % i == 0)
	{
		return (i);
	}
	else if (n < i)
	{
		return (0);
	}
	else 
	{
		return prime_number(n, i + 1);
	}
}
