#include "main.h"
#include <stdio.h>

/**
 * _strstr - get the location of the first occurence of needle in haystack
 * @haystack: pointer to string to into
 * @needle: pointer to string to search for
 * Return: Pointer to the first occuerence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for  (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == '\0')
		{
			break;
		}
		else if (haystack[i] == needle[j])
		{
			j++;
		}
		if (haystack[i + 1] != needle[j] && needle[j] != '\0')
		{
			j = 0;
		}
	}
	if (j == 0)
	{
		return ('\0');
	}
	return (&haystack[i - j]);
}
