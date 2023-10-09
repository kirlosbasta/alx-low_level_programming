#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of argument
 * @argv: pointer to an array of char
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *error = "Error\n";
	char *s1 = max(argv[1],argv[2]);
	char *s2 = min(argv[1], argv[2]);

	if (argc != 3)
	{
		print_string(error);
		exit(98);
	}
	if (_isdigit(argv[1]) || _isdigit(argv[2]))
	{
		print_string(error);
		exit(98);
	}
	return (0);
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

/**
 * isdigit - checks if an string digits only
 * @str: pointer to string
 *
 * Return: 0 if all digit and 1 there is a non integer value
 */
int _isdigit(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
 * print_string - print a simple string
 * @str: pointer to string
 *
 * Return: Nothing
 */

void print_string(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * min - Return the smaller string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to smaller string
 */

char *min(char *s1, char *s2)
{
	if (_strlen(s1) < _strlen(s2))
	{
		return (s1);
	}
	else
	{
		return (s2);
	}
}

/**
 * max - Return the biggest string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to biggest string
 */

char *max(char *s1, char *s2)
{
        if (_strlen(s1) > _strlen(s2))
        {
                return (s1);
        }
        else
        {
                return (s2);
        }
}

/**
 * mul - multiply two string of integers
 * @s1: pointer to the largest string
 * @s2: pointer to the smallest string
 *
 * Return: pointer to the result of the multiplycation
 */

char *mul(char *s1, char *s2)
{
	int len1, len2, i, j, ca, num;
	char *layers[];

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	layers = malloc(sizeof(char *) * len2);
	if (layers == NULL)
	{
		free(layers);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		layers[i] = malloc(sizeof(char) * (len1 + i + 2));
		if (layers[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(layers[i]);
			}
			free(layers);
			return (NULL);
		}
		ca = 0;
		/*put the zero for each layer except first one*/
		for (j = 0; j < len1; j++)
		{
			num = (s1[len1 - j - 1] - '0') *\
			      (s2[len2 - i - 1] - '0') + ca;
			layers[i][j] = (num % 10) + '0';
			ca = num / 10;
		}
		layers[i][j] = ca + '0';
		layers[i][j + 1] = '\0';
	}
