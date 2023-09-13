/**
 * _islower - Checks the letters
 * @c: parameter of type int that converts the letters to ASCII code
 *
 * Description: Checks if the letter is lowercase
 * Return: 1 in succes and 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
