/**
 * print_numbers - Prints numbers from 0 to 9 in ascending order
 * 
 * Return: always 0
 */
void print_numbers(void)
{
	int i = 0;

	while ( i < 10)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
	return (0);
}
