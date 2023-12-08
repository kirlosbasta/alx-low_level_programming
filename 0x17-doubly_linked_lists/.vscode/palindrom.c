#include <stdlib.h>
#include <stdio.h>

void rev_string(char *s);
int _strlen(char *s);
char *num_to_str(int num);
int palindrom(int num);

int main(void)
{
	int i, j;
	int num;
	int biggest = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			num = i * j;
			if (palindrom(num))
			{
				if (num > biggest)
				{
					biggest = num;
				}
			}
		}
	}
	printf("%s\n", num_to_str(biggest));
	return (0);
}

void rev_string(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char *num_to_str(int num)
{
	char *str = malloc(sizeof(char) * 8);
	int i = 0;

	if (num < 0)
	{
		str[i++] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[i++] = '0' + num % 10;
		num /= 10;
	}
	rev_string(str);
	return (str);
}

int palindrom(int num)
{
	int i = 0;
	char *str = num_to_str(num);
	int len = _strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}