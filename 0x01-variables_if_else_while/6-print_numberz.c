#include <stdio.h>

/**
 * main - Print a range of number
 *
 * Description: Print range of number from 0 to 9
 * Return: Print numbers from 0 to 9
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
