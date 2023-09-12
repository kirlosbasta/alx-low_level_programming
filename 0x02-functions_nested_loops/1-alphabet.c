#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lower case followed by new line
 * Return: Always 0
 */
/**
 * print_alphabet: Prints alphabets
 *
 * Description: Prints the alphabets in lowercase 
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
/*int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}*/
