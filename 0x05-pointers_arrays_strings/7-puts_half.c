#include "main.h"

/**
 *_strlen - count the number of string
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
 * puts_half - Print the second half of string
 * @str: Pointer to string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; str[i] != 0; i++)
	{
		if (len % 2 == 1)
		{
			if (i > len / 2)
			{
				_putchar(str[i]);
			}
		}
		else if (len % 2 == 0)
		{
			if (i >= len / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
