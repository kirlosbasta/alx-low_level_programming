/**
 * _isupper - Checks if the letter is uppercase
 * @c: Letter
 * Description: checks if the letter is uppercase
 * Return: 1 if uppercase 0 if else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
