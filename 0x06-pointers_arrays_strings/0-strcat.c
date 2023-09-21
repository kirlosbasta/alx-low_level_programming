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
	char *counter = dest;

	for (i = 0; dest[i] != 0; i++)
	{
		counter++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		*counter = *src;
		counter++;
		src++;
	}
	return (dest);
}
