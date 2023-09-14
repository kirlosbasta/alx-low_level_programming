#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int n = 1;
	int j = 2;
	int last;

	printf("1, 2, ");
	while (i <= 50)
	{
		last = n + j;
		printf("%d", last);
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
