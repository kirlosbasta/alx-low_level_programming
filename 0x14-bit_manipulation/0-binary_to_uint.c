#include "main.h"

/**
 * binary_to_uint - Convert a binary string and print it
 * @b: Pointer to a binary string
 *
 * Return: Decimal digit if the number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	if (binary_check(b) == 1)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum = sum * 2 + (b[i] - '0');
	}
	return (sum);
}

/**
 * binary_check - Check a string if it contain any char other than 0 and 1
 * @b: Pointer to a binary string
 *
 * Return: 0 if binary 1 if not
 */

int binary_check(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (1);
		}
	}
	return (0);
}
