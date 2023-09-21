#include "main.h"

/**
 * cap_string - convert lower case to uppercase at the initial of each word
 * @s: pointer to string
 * Return: pointer to s (in upper case)
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
			    || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			    || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?'
			    || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
			    || s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
