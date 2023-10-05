#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your programm
 * @ac: The number of arguments
 * @av: pointer to an array of pointers
 *
 * Return: Pointer to the new string in success and NULL in failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	str = malloc(sizeof(char) * (len + ac));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';
	return (str);
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
