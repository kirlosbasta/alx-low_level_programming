#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 * REturn: Nothing
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
