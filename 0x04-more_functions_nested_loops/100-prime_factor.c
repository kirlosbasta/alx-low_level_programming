#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 * Return: always 0
 */
int main(void)
{
	prime_factor(1231952);
	prime_factor(612852475143);
	return (0);
}

/**
 * prime_factor - print the largest prime factor
 * @num: number
 * Return: always 0
 */
int prime_factor(long num)
{
	int n = prime_number(num);

	while (num / n != 1)
	{
		num /= n;
	}
	return (n);
}
/**
 * prime_number - give the prime number until reaching prime
 * @prime: integer to be checkes
 * Return: The prime number
 */

int prime_number(long prime)
{
	int i;

	for (i = 2; i <= prime; i++)
	{
		if (prime % i == 0)
		{
			return (i);
			break;
		}
	}
}

