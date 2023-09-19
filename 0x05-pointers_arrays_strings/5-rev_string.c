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

/**
 * rev_string - printthe string and it reverse
 * @s: Poiinter to string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
