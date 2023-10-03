#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the programm
 * @argc: number of argument
 * @argv: Array of pointer that point to arguments
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
