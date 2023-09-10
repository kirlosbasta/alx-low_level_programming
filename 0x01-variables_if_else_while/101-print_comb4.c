#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the combination of three digit
 * and digit i not equal to digit e and the same for j
 * and print only the smallest combination
 *
 * Return: terminating the program
 */

int main(void)
{
	int i;
	int n;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (n = 1 + i; n < 10; n++)
		{
			for (j = 1 + n; j < 10; j++)
			{
				putchar ('0' + i);
				putchar ('0' + n);
				putchar ('0' + j);
				if (i != 7 || n != 8 || j != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
