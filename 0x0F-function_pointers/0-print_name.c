#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print the name using f function
 * @name: The name to print
 * @f: pointer to a fundtion
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}