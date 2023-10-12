#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the numbers separated by sperator followd by new line
 * @separator: Separate the number
 * @n: Numbers of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	/*	else
		{
			printf("%d", va_arg(ap, int));
		}*/
	}
/*	printf("%d\n", va_arg(ap, int));*/
	va_end(ap);
}
