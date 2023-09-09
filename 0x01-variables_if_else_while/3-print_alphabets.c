#include <stdio.h>
/**
 * main - Print from a-z and A-Z
 *
 * Description: print form a-z using only putchar
 * Return: a string from a to z followed by new line two times
 * once capital and once small
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
