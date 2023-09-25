#include "main.h"

/**
 * _memset - fills the memory with constant char b until n
 * @s: pointer to string
 * @b: char to fill the memory
 * @n: The size to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
