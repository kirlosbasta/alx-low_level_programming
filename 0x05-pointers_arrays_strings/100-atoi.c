#include "main.h"

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
	int res = 0;
	/**
	 * for loop to iterate through the string
	 * if the letter is - or +  multibly by 1 or -1
	 * if there are no number return 0
	 * */
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
