#include "main.h"

/**
 * leet - encode the following leeter to the corsiponding number
 * letter "aA" to 4
 * letter "eE" to 3
 * letter "oO" to 0
 * letter "tT" to 7
 * letter "lL" to 1
 * @s: pointer to string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i, j;
	char leetchar[] = "AaEeLlOoTt";
	char leetnum[] = "4433110077";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (leetchar[j] == s[i])
			{
				s[i] = leetnum[j];
			}
		}
	}
	return (s);
}

