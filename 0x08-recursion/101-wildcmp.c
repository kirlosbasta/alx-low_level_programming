#include "main.h"

/**
 * wildcmp - Compare two string
 * @s1: Pointer to string
 * @s2: Pointer to string
 * Description: Comapre s1 to s2 and s2 can contain special character '*'
 * and '*' can replace any string
 * Return: 1 if the strings can be considered identical, otherwise return 0;
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2, 0, _strlen(s1), _strlen(s2)));
}

/**
 * _strlen - Print the length of a string
 * @s: Pointer to string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}

/**
 * wildcmp_helper - The same as wildcmp
 * @i: index
 * @len1: Length of s1
 * @len2: Length of s2
 * @s1: Pointer to integer
 * @s2: Pointer to integer
 * Return: 1 if s1 and s2 are identical and 0 if not
 */

int wildcmp_helper(char *s1, char *s2, int i, int len1, int len2)
{
	if (s2[i] == '*')
	{
		return (wildcard_handler(s1, s2, len1 - 1, len2 - 1));
	}
	else if (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			return (wildcmp_helper(s1, s2, i + 1, len1, len2));
		}
	}
	else if (s1[i] == 0 || s2[i] == 0)
	{
		return (1);
	}
	return (0);
}

/**
 * wildcard_handler - Handle the astersik
 * @s1: pointer to string
 * @s2: pointer to string
 * @i1: last index of s1
 * @i2: last index of s2
 * Return: 1 if every charcter after the * is the same
 * in both string starting from the end to the astrisk
 */

int wildcard_handler(char *s1, char *s2, int i1, int i2)
{
	if (s2[i2] == '*')
	{
		return (1);
	}
	else if (s1[i1] == s2[i2])
	{
		return (wildcard_handler(s1, s2, i1 - 1, i2 - 1));
	}
	return (0);
}

