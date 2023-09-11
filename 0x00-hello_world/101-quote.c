#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the message below
 * Return: 1
 */
int main(void)
{
	char mess[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", mess);
	return (1);
}
