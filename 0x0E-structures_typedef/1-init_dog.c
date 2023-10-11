#include "dog.h"

/**
 * init_dog - intialize a variable of type struct dog
 * @d: pointer to the struct dog variable
 * @name: pointer to string
 * @age: the age of the dog
 * @owner: pointer to string of name of the owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
