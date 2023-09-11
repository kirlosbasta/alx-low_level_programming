#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the sizes of each type
 * Return: Exit point
 */
int main(void)
{
	char a = sizeof(a);
	int b = sizeof(b);
	long int c = sizeof(c);
	long long int d = sizeof(d);
	float s = sizeof(s);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %ld byte(s)\n", c);
	printf("Size of a long long int: %lld byte(s)\n", d);
	printf("Size of a float: %f byte(s)\n", s);
	return (0);
}
