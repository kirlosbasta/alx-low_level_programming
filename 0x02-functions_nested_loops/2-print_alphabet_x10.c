#include "main.h"

/**
 * print_alphabet - Prints alphabets
 *
 * Description: Prints the alphabets ten times in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
