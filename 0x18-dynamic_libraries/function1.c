#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
 * _abs - Absolute
 * @n: integer
 *
 * Description: Give the absoulte value
 * Return: always n
 */
int _abs(int n)
{
	if (n > 0)
	{
		n *= 1;
	}
	else
	{
		n *= -1;
	}
	return (n);
}
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
/**
 * _isdigit - checks if c is digit
 * @c: integer
 * Return: 1 if integer and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _strlen - Count the length of string
 * @s: Pointer to string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * _puts - Print a string followed by newline
 * @str: pointer to string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * *_strcpy - copy the content of src to dest
 * @dest: pointer to the destination
 * @src: pointer to source
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *destptr = dest;
	char *srcptr = src;

	while (*srcptr != '\0')
	{
		*destptr = *srcptr;
		destptr++;
		srcptr++;
	}
	*destptr = '\0';
	return (dest);
}
/**
 * _atoi - convert string to an integer
 * @s: pointer to string
 * Return: integer of the string
 */

int _atoi(char *s)
{
	int i, digit;
	int check = 0;
	int sign = 1;
	unsigned int res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			res = res * 10 + digit;
			check++;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
	}
	if (check == 0)
	{
		return (0);
	}
	return (res * sign);
}
/**
 * _strcat - Concatenate two string
 * @dest: Pointer to destination string
 * @src: Pointer to string that need to concatenate to dest
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
/**
 * _strncat - conacatenate two stings until n is reached
 * @dest: pointer to char
 * @src: Pointer to char that need to be added to end of dest*
 * @n: number of bytes in c to be concatenated
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != 0)
	{
		ptr++;
	}
	for (i = 0; i < n && !(*src == '\0'); i++)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * _strncpy - copy the n byte of string src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: Number of byte to be copyed
 * Return: The destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destptr = dest;
	char *srcptr = src;
	int i;

	for (i = 0; i < n && *srcptr != '\0'; i++)
	{
		*destptr = *srcptr;
		destptr++;
		srcptr++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strcmp - comapare s1 by s2
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: if s1 greater than s2 the return is positive
 * if s1 less than s2 the return is negative
 * if both are the same return 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

/**
 * _memset - fills the memory with constant char b until n
 * @s: pointer to string
 * @b: char to fill the memory
 * @n: The size to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _memcpy - copies the memory area from src to dest until n is reached
 * @dest: pointer to the destination string
 * @src: pointer to sourc string
 * @n: The size of bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

/**
 * _strchr - locate the first occurence of a charcter c in the string s
 * @s: pointer to string
 * @c: charcter to be located
 * Return: pointer to addres of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}

/**
 * _strspn - get the length of strig s in substring accept
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: The length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (counter);
			}
		}
	}
	return (counter);
}

/**
 * _strpbrk - Searches a string for any set of byte
 * @s: pointer to string
 * @accept: The string to for any set of byte
 * Return: Pointr to a byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0';  i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (s[i] == 0)
	{
		return (0);
	}
	else
	{
		return (&s[i]);
	}
}

/**
 * _strstr - get the location of the first occurence of needle in haystack
 * @haystack: pointer to string to into
 * @needle: pointer to string to search for
 * Return: Pointer to the first occuerence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for  (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == '\0')
		{
			break;
		}
		else if (haystack[i] == needle[j])
		{
			j++;
		}
		if (haystack[i + 1] != needle[j] && needle[j] != '\0')
		{
			j = 0;
		}
	}
	if (needle[j] != 0)
	{
		return ('\0');
	}
	return (&haystack[i - j]);
}
