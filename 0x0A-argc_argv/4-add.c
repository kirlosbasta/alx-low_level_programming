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
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		while (*s != 0)
		{
			if (*s < 47 || *s > 57)
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


