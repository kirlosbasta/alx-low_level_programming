#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	i = prime_factor(612852475143);
	printf("%d\n", i);

	return (0);
}

/**
 * prime_factor - print the largest prime factor
 * @num: number
 * Return: always 0
 */
int prime_factor(long num)
{
	long *n = &num;
	int j = prime_number(*n);

	while (*n / j != 1)
	{
		*n /= j;
		j = prime_number(*n);
	}
	return (j);
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
			break;
		}

	}
	return (i);
}
