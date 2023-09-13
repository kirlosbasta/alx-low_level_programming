int _putchar(char c);
/**
 * print_times_table - times table
 * @n: integer
 *
 * Description: Print the 9 times tables
 * Return: always 0
 */
void print_times_table(int n)
{
	int i = 0, j, d;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				d =  j * i;
				if (d < 10)
				{
					if (d != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					if (d == 0 && i == 0 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + d);
				}
				else if (d < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + d / 10);
					_putchar('0' + d % 10);
				}
				else if (d < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + d / 100);
					_putchar('0' + ((d % 100) / 10));
					_putchar('0' + ((d % 100) % 10));
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
