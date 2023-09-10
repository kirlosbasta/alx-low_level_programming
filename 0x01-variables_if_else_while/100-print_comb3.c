#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the combination of two digit and digit i not equal to digit e
 * Retutn: 0
 */
int main(void)
{
	int i = 0;
	int n = 0;

	while (i <= 9)
	{
		putchar (i);
		while (n <= 9)
		{
			if (i != n)
			{
				putchar (n);
			}
		}
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
	return (0);
}
