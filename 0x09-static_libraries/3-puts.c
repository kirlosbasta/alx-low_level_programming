#include "main.h"

/**
 * _puts - Print a string followed by newline
 * @str: pointer to string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
