#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the old memory
 * @old_size: The old memory size
 * @new_size: The new memory size
 *
 * Return: pointer to the new memory block in success or null in failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

/**
 * _memcpy - copies the memory area from src to dest until n is reached
 * @dest: pointer to the destination pointer
 * @src: pointer to sourc pointer
 * @n: The size of bytes to copy from src
 * Return: pointer to dest
 */

void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
