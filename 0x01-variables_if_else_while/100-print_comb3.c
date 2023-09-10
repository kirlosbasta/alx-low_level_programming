#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the combination of two digit
 * and digit i not equal to digit e
 *
 * Return: terminating the program
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 1 + i; n < 10; n++)
		{
			putchar ('0' + i);
			putchar ('0' + n);
			if (i != 8 || n != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
