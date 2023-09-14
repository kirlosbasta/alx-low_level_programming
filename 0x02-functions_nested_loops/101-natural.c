#include <stdio.h>

/**
 * sum_of_multibles - Print the sum
 *
 * Description: Pritn the sum of the multibles of three or five
 * Return: n the sum of multibles
 */
int sum_of_multibles(void)
{
	int i = 0;
	int n = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0)
		{
			n += i;
		}
		else if ((i % 5) == 0)
		{
			n += i;
		}
		i++;
	}
	return (n);
}
/**
 * main - Entry point
 *
 * Description check the function
 * Return: always 0
 */
int main(void)
{
	int s = sum_of_multibles();

	printf("%d\n", s);
	return (0);
}
