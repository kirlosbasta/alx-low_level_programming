#include <stdio.h>

/**
 * main - Prints from a..z excipt for q and e
 *
 * Description: prints from a..z excpit for q and e
 * Return: String of lower case alphabet excpt for the letter q and e
 * followed by new line
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
}
