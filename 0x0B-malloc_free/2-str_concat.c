#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to the concatenated string in success
 * and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i = 0, j = 0;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	if (len1 != 0)
	{
		for (i = 0; s1[i] != 0; i++)
		{
			s[i] = s1[i];
		}
	}
	if (len2 != 0)
	{
		for (j = 0; s2[j] != 0; j++, i++)
		{
			s[i] = s2[j];
		}
	}
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - count the length of a string excluding null terminator
 * @str: pointer to string
 *
 * Return: the length
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
