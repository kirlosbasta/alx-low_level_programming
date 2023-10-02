#include "main.h"
/**
 * _strchr - locate the first occurence of a charcter c in the string s
 * @s: pointer to string
 * @c: charcter to be located
 * Return: pointer to addres of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}

