#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int f1(int len);
int f2(int len, char *username);
int f3(int len, char *username);
int f4(int len, char *username);
int f5(int len, char *username);
int f6(int ch);

/**
 * main - generate valid password for the user name
 * @ac: number of argument
 * @av: List of argument
 *
 * Return: always 0
 */

int main(int ac, char **av)
{
	char *username;
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char password[7];
	int len;

	if (ac != 2)
	{
		return (0);
	}
	username = av[1];
	len = strlen(username);
	password[0] = c[f1(len)];
	password[1] = c[f2(len, username)];
	password[2] = c[f3(len, username)];
	password[3] = c[f4(len, username)];
	password[4] = c[f5(len, username)];
	password[5] = c[f6(username[0])];
	password[6] = '\0';
	printf("%s\n", password);
	return (0);
}
/**
 * f1 - Get index for the password
 * @len: length of user name
 *
 * Return: index
 */
int f1(int len)
{
	return ((len ^ 59) & 63);
}

/**
 * f2 - Get index for the password
 * @len: length of user name
 * @username: Username
 *
 * Return: index
 */

int f2(int len, char *username)
{
	int i, y = 0;

	for (i = 0; i < len; i++)
	{
		y += username[i];
	}
	return ((y ^ 79) & 63);
}

/**
 * f3 - Get index for the password
 * @len: length of user name
 * @username: Username
 *
 * Return: index
 */

int f3(int len, char *username)
{
	int i = 0, x = 1;

	for (i = 0; i < len; i++)
	{
		x *= username[i];
	}
	return ((x ^ 85) & 63);
}

/**
 * f4 - Get index for the password
 * @len: length of user name
 * @username: Username
 *
 * Return: index
 */
int f4(int len, char *username)
{
	int i;
	char ch;

	ch = username[0];
	for (i = 0; i < len; i++)
	{
		if (ch <= username[i])
		{
			ch = username[i];
		}
	}
	srand(ch ^ 14);
	return (rand() & 63);
}

/**
 * f5 - Get index for the password
 * @len: length of user name
 * @username: Username
 *
 * Return: index
 */
int f5(int len, char *username)
{
	int i, ch, sum = 0;

	for (i = 0; i < len; i++)
	{
		ch = username[i];
		ch *= ch;
		sum += ch;
	}
	return ((sum ^ 239) & 63);
}

/**
 * f6- Get index for the password
 * @ch: first character of username
 *
 * Return: index
 */
int f6(int ch)
{
	int i = 0, x = 0;

	for (i = 0; ch > i; i++)
	{
		x = rand();
	}
	return ((x ^ 229) & 63);
}
