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
