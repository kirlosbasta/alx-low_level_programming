#include <stdio.h>

/**
 * main - Print numbers
 *
 * Description: Use combination to print range of nubers
 * Return: 0, 1, to 9
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar ('0' + i);
		putchar (44);
		putchar (32);
		i++;
	}
	putchar ('\n');
	return (0);
}
