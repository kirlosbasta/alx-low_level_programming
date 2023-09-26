#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "School";
	char *t;
	
	t = _strstr(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);
}
