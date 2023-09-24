#include <stdio.h>
void fibonacci98(void);

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci98();
	return (0);
}

/**
 * fibonacci98 - get the first 98 terms of fibonacci sequence
 *
 * Return: Nothing
 */
void fibonacci98(void)
{
	unsigned long i = 1;
	unsigned long i1, i2, j1, j2, h1, h2;
	unsigned long j = 2;
	unsigned long  sum = 0;
	int a;

	for  (a = 0; a < 90; a++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%lu, ", sum);
	}
	i1 = i / 10000000000;
	i2 = i % 10000000000;
	j1 = j / 10000000000;
	j2 = j % 10000000000;
	
	for (; a < 96; a++)
	{
		h1 = i1 + j1;
		h2 = i2 + j2;
		if ((i2 + j2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf ("%lu%lu", h1, h2);
		if (a != 95)
		{
			printf(", ");

			i1 = j1;
			i2 = j2;
			j1 = h1;
			j2 = h2;
		}
	}
	printf("\n");
}
