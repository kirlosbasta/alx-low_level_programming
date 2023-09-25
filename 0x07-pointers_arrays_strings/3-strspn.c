#include "main.h"

/**
 * _strspn - get the length of strig s in substring accept
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: The length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (counter);
			}
		}
	}
	return (counter);
}
