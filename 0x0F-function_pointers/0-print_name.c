#include "function_pointers.h"

/**
 * print_name - print the name using f function
 * @name: The name to print
 * @f: pointer to a fundtion
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
