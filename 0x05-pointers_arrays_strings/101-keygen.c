#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Programm that genarate a random vaild number
 *
 *Return: Always 0
 */

int main(void)
{
	int i, key_sum, j;
	char *input = "abcdefghijklmnopqrstuvwxyz0123456789";
	char passwd[80];

	srand(time(NULL));
	key_sum = 0;
	while (key_sum != 2772)
	{
	i = 0;
	key_sum = 0;
	j = 0;
		while (key_sum < 2772)
		{
			j = rand() % 34;
			passwd[i++] = input[j];
			key_sum += input[j];
		}
		j = 0;
		while (input[j] != '\0')
		{
			if (input[j] == (2772 - key_sum))
			{
				j = rand() % 34;
				passwd[i++] = input[j];
				key_sum += input[j];
				break; 
			}
			j++;
		}
	}
	passwd[i] = '\0';
	printf("%s", passwd);
	return (0);
}
