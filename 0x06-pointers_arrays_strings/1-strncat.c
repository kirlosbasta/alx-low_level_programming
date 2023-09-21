#include "main.h"

/**
 * _strncat - conacatenate two stings until n is reached
 * @dest: pointer to char
 * @src: Pointer to char that need to be added to end of dest*
 * @n: number of bytes in c to be concatenated
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != 0)
	{
		ptr++;
	}
	for (i = 0; i < n && !(*src == '\0'); i++)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
