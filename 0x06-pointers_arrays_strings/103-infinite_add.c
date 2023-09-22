#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, l, m, n;

	for (len1 = 0; n1[len1]; len1++)
	;
	for (len2 = 0; n2[len2]; len2++)
	;
	if (len1 > size_r || len2 > size_r)
	return (0);
	m = 0;
	for (len1 -= 1, len2 -= 1, i = 0; i < size_r - 1; len1--, len2--, i++)
	{
		n = m;
		if (len1 >= 0)
			n += n1[len1] - '0';
		if (len2 >= 0)
			n += n2[len2] - '0';
		if (len1 < 0 && len2 < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[i] = n % 10 + '0';
	}
	r[i] = '\0';
	if (len1 >= 0 || len2 >= 0 || m)
		return (0);
	for (i -= 1, l = 0; l < i; i--, l++)
	{
		m = r[i];
		r[i] = r[l];
		r[l] = m;
	}
	return (r);
}
