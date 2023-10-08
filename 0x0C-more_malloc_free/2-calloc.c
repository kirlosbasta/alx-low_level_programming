#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory of an array and set the values to 0
 * @nmemb: The number of element in the array
 * @size: The size of the one member
 *
 * Return: A void pointer to The memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)s + i) = 0;
	}
	return (s);
}
