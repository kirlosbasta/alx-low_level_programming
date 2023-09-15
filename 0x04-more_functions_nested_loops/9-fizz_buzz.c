#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the numbers from 1 to 100
 * but replace the multible of 3 by Fizz
 * and the multible of 5 by Buzz
 * and the multible of both with FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
