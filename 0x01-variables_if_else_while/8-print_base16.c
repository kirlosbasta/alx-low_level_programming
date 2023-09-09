#include <stdio.h>

/**
 * main - print hexidecimal in lower case
 *
 * Description: Print the numbers from 0 to 9
 * followed by alphabet in lowercase from a to f
 * Return: 0123456789abcdef
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 9)
	{
		putchar ('0' + i);
		i++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
