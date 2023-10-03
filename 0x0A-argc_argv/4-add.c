#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds poisitive numbers
 * @argc: The number of argument
 * @argv: Array of pointer to char
 * Return: return 0 if success
 * and 1 if one of the number contain symbols thatare not digits
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}


