int _putchar(char c);
/**
 * times_table - times table
 *
 * Description: Print the 9 times tables
 * Return: always 0
 */
void times_table(void)
{
	int i = 0, j, n;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n =  j * i;
			if (n < 10)
			{
				if (n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (n == 0 && i == 0 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + n);
			}
			else
			{
				/*if (n != (9 * i) || n == 0)*/
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
