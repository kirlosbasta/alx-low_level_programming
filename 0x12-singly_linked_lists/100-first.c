#include "lists.h"

/**
 * premain - A demo of a function executed before main
 *
 * Return: Nothing
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\
	\nI bore my house upon my back!\n");
}
