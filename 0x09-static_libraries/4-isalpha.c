/**
 * _isalpha - Checks the letters
 * @c: parameter of type int that converts the letters to ASCII code
 *
 * Description: Checks if c is alphabet lower or upper case
 * Return: 1 in succes and 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
