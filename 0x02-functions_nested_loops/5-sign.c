int _putchar(char c);
/**
 * print_sign - Print the sign
 * @n: number
 *
 * Description: Print the sign of the number
 * Return: 1 if n greater than 1
 * 0 if n equal to zero
 * -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
