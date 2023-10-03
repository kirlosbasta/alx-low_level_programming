#include <stdio.h>

/**
 * main - ptints the number of argument
 * @argc: The number of argument
 * @argv: Array of pointer to string
 * Retun: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
