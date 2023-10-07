#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to The first string
 * @s2: pointer to the second string
 * @n: The first number of bytes
 *
 * Return: The pointer to the new allocated string
 * or NULL in failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = n;
	unsigned int len2 = _strlen(s2);
	unsigned int len1 = _strlen(s1);
	unsigned int k;
	int j;

	if (n >= len2)
	{
		i = len2;
	}
	s = malloc(sizeof(char) * (len1 + i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	if (len1 != 0)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			s[j] = s1[j];
		}
	}
	else
	{
		j = 0;
	}
	if (len2 != 0)
	{
		for (k = 0; k < i; k++, j++)
		{
			s[j] = s2[k];
		}
	}
	s[j] = '\0';
	return (s);
}

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
