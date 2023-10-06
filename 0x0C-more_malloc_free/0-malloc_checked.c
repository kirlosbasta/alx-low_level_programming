#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory usinf malloc
 * @b: The size of the memory
 *
 * Return: pointer to the memory in success and exit with code 98 in failure
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
