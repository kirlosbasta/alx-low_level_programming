int _putchar(char c);
/**
 * jack_bauer - Prints minutes
 *
 * Description: Print the minutes of the day followed by new line
 * Return: always 0
 */
void jack_bauer(void)
{
	int i = 0;
	int n, j, z;

	while (i < 3)
	{
		n = 0;
		while (n < 4)
		{
			j = 0;
			while (j < 6)
			{
				z = 0;
				while (z < 10)
				{
					_putchar('0' + i);
					_putchar('0' + n);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + z);
				       _putchar('\n');
				       z++;
				}
				j++;
			}
			n++;
		}
		i++;
	}
}
