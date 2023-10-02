#include "main.h"

/**
 * _memcpy - copies the memory area from src to dest until n is reached
 * @dest: pointer to the destination string
 * @src: pointer to sourc string
 * @n: The size of bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

