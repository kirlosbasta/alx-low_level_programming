int _putchar(char c);
/**
 * print_to_98 - Prints number
 * @n: integer
 *
 * Description: prints the until reaches 98
 * if n more than 98 substract until reach 98
 * if n less than 98 add until reach 98
 * Return: always 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		while (n < 0)
		{
			n = -n;
			_putchar('-');
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		if (n < 10)
		{
			_putchar('0' + n);
		}
		else if (n > 9)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n == 98)
		{
			_putchar('\n');
		}
		n++;
	}
	while (n >= 98)
	{
		if (n < 100)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n > 99)
		{
			_putchar('0' + n / 100);
			_putchar('0' + ((n / 10) % 10));
			_putchar('0' + ((n % 100) % 10));
		}
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
		n--;
	}
}
