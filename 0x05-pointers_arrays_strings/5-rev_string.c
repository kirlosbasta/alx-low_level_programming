#include "main.h"

/**
 * _strlen - count the number of string
 * @s: pointer to string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Print the string in reverse
 * @s: Pointer to string
 * Return: Length of the string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

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

/**
 * rev_string - printthe string and it reverse
 * @s: Poiinter to string
 * Return: Noting
 */

void rev_string(char *s)
{
	_puts(s);
	print_rev(s);
}
