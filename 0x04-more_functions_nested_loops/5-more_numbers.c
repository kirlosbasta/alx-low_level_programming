#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			if (j < 15)
			{
				_putchar('0' + j % 10);
			}
		}
		_putchar('\n');
	}
}
