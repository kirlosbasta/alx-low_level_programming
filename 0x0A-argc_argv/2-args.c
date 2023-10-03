#include <stdio.h>

/**
 * main - print the argument passed to main
 * @argc: The number of arugment
 * @argv: Array of pointers to char
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
