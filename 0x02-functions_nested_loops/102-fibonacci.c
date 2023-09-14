#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int i = 3;
	long int n = 1;
	long int j = 2;
	long int last;

	printf("1, 2, ");
	while (i <= 50)
	{
		last = n + j;
		printf("%ld", last);
		if (i < 50)
		{
			printf(", ");
		}
		n = j;
		j = last;
		i++;
	}
	printf("\n");
	return (0);
}
