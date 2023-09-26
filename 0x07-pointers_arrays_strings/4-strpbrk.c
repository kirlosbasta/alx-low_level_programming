#include "main.h"

/**
 * _strpbrk - Searches a string for any set of byte
 * @s: pointer to string
 * @accept: The string to for any set of byte
 * Return: Pointr to a byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0';  i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (s[i] == 0)
	{
		return (0);
	}
	else
	{
		return (&s[i]);
	}
}
