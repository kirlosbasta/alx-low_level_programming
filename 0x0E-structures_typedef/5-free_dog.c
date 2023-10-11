#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d);
	}
}
