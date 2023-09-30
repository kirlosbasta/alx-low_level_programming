#include "main.h"

/**
 * is_palindrome - Checks if a string is symetrical or not
 * @s: Pointer to string
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (helper_palindrome(s, 0, _strlen(s)));
}

/**
 * helper_palindrome - helps is_palindrome
 * @s: Pointer to string
 * @i: The index
 * @length: The length of the string
 * Return: 1 if palindorm and 0 if not
 */
int helper_palindrome(char *s, int i, int length)
{
	int len = length - (i + 1);

	if (i > length / 2)
	{
		return (1);
	}
	else if (s[i] != s[len])
	{
		return (0);
	}
	if (s[i] == s[len])
	{
		return (helper_palindrome(s, i + 1, length));
	}
	return (-1);
}

/**
 * _strlen - get the length of a string
 * @s: Pointer to string
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	if (s[0] == '\0')
	{
		return (count);
	}
	else
	{
		return (count = _strlen(s + 1) + 1);
	}
}
