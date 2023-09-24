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
	unsigned long j = 2;
	unsigned long  sum = 0;
	int a;

	for  (a = 0; a < 92; a++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%lu", sum);
		if (a != 91)
		{
			printf(", ");
		}
	}
	printf("\n");
}
