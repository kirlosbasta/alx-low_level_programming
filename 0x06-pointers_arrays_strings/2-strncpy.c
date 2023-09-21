#include "main.h"

/**
 * _strncpy - copy the n byte of string src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: Number of byte to be copyed
 * Return: The destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destptr = dest;
	char *srcptr = src;
	int i;

	for (i = 0; i < n && *srcptr != '\0'; i++)
	{
		*destptr = *srcptr;
		destptr++;
		srcptr++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
