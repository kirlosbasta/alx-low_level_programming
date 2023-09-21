#include "main.h"
/**
 * _strcat - Concatenate two string
 * @dest: Pointer to destination string
 * @src: Pointer to string that need to concatenate to dest
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
