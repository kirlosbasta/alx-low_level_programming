#include "main.h"

/**
 * _print_rev_recursion - Print the string in reverse
 * @s: Pointer to string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
