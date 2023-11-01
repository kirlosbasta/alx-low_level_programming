#include "main.h"

/**
 * create_file - Create a file if it doesn't exist and add text_content to it
 * @filename: Filename
 * @text_content: Text to add to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			open(filename, O_TRUNC);
			return (-1);
		}
		return (-1);
	}
	else
	{
		if (text_content == NULL)
		{
			text_content = "";
		}
		wt = write(fd, text_content, _strlen(text_content));
		if (wt < 0)
		{
			return (-1);
		}
		close(fd);
		return (1);
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
