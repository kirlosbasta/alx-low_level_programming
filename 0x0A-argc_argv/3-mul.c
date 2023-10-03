#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two arument and print the result
 * @argc: The nubmer of argument
 * @argv: Array of pointers to char
 * Return: 0 if two argument are passed and 1 if no argument are passed
 */

int main(int argc, char *argv[])
{
	int i;
	long sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return (0);
}
