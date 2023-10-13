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
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
