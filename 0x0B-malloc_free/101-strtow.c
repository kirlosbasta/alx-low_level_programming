#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: pointer to string
 *
 * Return: pointer to string or NULL in case of failure
 */

char **strtow(char *str)
{
	int i, len, wordlen;
	char **s;
	int index = 0;
	int wi = 0;
	int *indexptr;
	int *wiptr;

	indexptr = &index;
	wiptr = &wi;
	len = count_words(str) + 1;
	s = malloc(sizeof(char *) * len);
	if (s == NULL || _strlen(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len - 1; i++)
	{
		wordlen = word_len(str, indexptr);
		s[i] = malloc(sizeof(char) * (wordlen + 1));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(s[i]);
			}
			return (NULL);
		}
		s[i] = copy_word(s[i], str, wiptr);
	}
	s[i] = NULL;
	return (s);
}
/**
 * _strlen - count the length of a string excluding null terminator
 * @str: pointer to string
 *
 * Return: the length
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * count_words - count the number of words in strings
 * @str: pointer to string
 *
 * Return: The number of words
 */

int count_words(char *str)
{
	int counter = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
		{
			counter++;
		}
	}
	return (counter);
}

/**
 * word_len - the length of the word in a string
 * @str: Pointer to string
 * @index: pointer to the index of the string
 *
 * Return: The length of the word
 */

int word_len(char *str, int *index)
{
	int counter = 0;

	while (str[*index] != '\0')
	{
		if (str[*index] != ' ')
		{
			counter++;
			if (str[*index + 1] == ' ')
			{
				*index = *index + 1;
				break;
			}
		}
		*index = *index + 1;
	}
	return (counter);
}

/**
 * copy_word - copy word to a pointer
 * @dest: Pointer to string of the copy
 * @src: Pointer to string of the source
 * @i: index of the start of a new word
 *
 * Return: Pointer to the copy
 */

char *copy_word(char *dest, char *src, int *i)
{
	char *destptr = dest;
	char *srcptr = src;
	int j = 0;

	while (srcptr[*i] != '\0')
	{
		if (srcptr[*i] != ' ')
		{
			destptr[j] = srcptr[*i];
			j++;
			if (srcptr[*i + 1] == ' ')
			{
				*i = *i + 1;
				break;
			}
		}
		*i = *i + 1;
	}
	destptr[j] = '\0';
	return (dest);
}
