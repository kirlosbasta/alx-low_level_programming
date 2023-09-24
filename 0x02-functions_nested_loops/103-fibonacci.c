#include <stdio.h>
int even_fibonacci(void);

/**
 * main - entry point
 *
 * Return: Nothing
 */
int main(void)
{
	int i = even_fibonacci();

	printf("%d\n", i);
	return (0);
}

/**
 * even_fibonacci - get the even valued fibonacci to 4000000
 *
 * Return: The sum
 */
int even_fibonacci(void)
{
	int i = 1;
	int j = 2;
	int n = 0;
	int sum = 0;

	while (sum <= 4000000)
	{
		if (i % 2 == 0)
		{
			sum = i + j;
		}
		n = i + j;
		i = j;
		j = sum;
	}
	return (sum);
}
