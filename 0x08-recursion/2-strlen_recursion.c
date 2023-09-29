#include "main.h"

/**
 * _strlen_recursion - Print the length of a string
 * @s: Pointer to string
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
