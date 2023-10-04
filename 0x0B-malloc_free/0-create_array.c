#include <stdlib.h>

/**
 * create_array - create an array of chars
 * and initializes it with specific char
 * @size: the size of the array
 * @c: The initialization char
 *
 * Return: Pointer to the array in success and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(c) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
