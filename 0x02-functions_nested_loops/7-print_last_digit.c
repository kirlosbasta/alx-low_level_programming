int _putchar(char c);
/**
 * print_last_digit - Prints last digit
 * @n: parameter int
 *
 * Description: print the last digit
 * Return: i
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (n > 0)
	{
		i *= 1;
		_putchar('0' + i);
		return (i);
	}
	else
	{
		i *= -1;
		_putchar('0' + i);
		return(i);
	}
}
