#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints two sets of two digit numbers
 *should be separated by space and ends with comma and space
 *
 * Return: Exit point
 */
int main(void)
{
	int i1, i2, j1, j2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 < 10; i2++)
		{
			for (j1 = 0; j1 < 10; j1++)
			{
				for (j2 = j1 + 1; j2 < 10; j2++)
				{
					putchar ('0' + i1);
					putchar ('0' + i2);
					putchar (' ');
					putchar ('0' + j1);
					putchar ('0' + j2);
					if (i1 != 9 || i2 != 8 || j1 != 9 || j2 != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);

}
