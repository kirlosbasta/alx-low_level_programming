#include <stdio.h>
/**
 * main - Print from a-z
 *
 * Description: prit form a-z using only putchar
 * Return: a string from a to z followed by new line
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
