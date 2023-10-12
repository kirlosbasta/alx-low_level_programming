#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two int
 * @a: int
 * @b: int
 *
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two int
 * @a: int
 * @b: int
 *
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two int
 * @a: int
 * @b: int
 *
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two int
 * @a: int
 * @b: int
 *
 * Return: The result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get the remainder of two int
 * @a: int
 * @b: int
 *
 * Return: The result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
