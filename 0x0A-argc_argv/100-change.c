#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins
 * to make change for an amount of money
 * @argc: Number of arguments
 * @argv: array of pointer to the argument
 *
 * Return: 0 on success and  1 in failure
 */
int main(int argc, char **argv)
{
	int cents;
	int counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		counter++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		counter++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		counter++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		counter++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		counter++;
		cents -= 1; }
	printf("%d\n", counter);
	return (0);
}

