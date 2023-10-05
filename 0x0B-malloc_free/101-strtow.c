#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: pointer to string
 *
 * Return: pointer to string or NULL in case of failure
 */

char **strtow(char *str)
{
/*	int i, j, len;*/
	char **s;

	s = malloc(sizeof(char) * _strlen(str));
	if (str == NULL || _strlen(str) == 0)
	{
		return (NULL);
	}
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
