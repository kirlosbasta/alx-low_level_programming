#include "main.h"

/**
 * append_text_to_file - Append text to file
 * @filename: Filename
 * @text_content: String to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	wt = write(fd, text_content, _strlen(text_content));
	if (wt < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
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
