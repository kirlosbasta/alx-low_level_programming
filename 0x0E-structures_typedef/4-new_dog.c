#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 *
 * Return: Pointer to the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpy_name = name;
	char *cpy_owner = owner;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
