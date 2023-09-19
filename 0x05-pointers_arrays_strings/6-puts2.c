#include "main.h"

/**
 * puts2 - Print evey other number
 * @str: Pointer to string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
