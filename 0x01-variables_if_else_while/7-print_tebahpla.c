#include <stdio.h>
/**
 * main - Prints reverse alphabet
 *
 * Description: Use putchar only to print reverse alphabet
 * Return: The alphabet revesed
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar ('\n');
	return (0);
}
