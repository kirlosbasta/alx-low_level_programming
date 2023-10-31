#include "main.h"

/**
 * read_textfile - Read a text file and print until letters
 * @filename: Filename
 * @letters: letters to be read
 *
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t letters_printed = 0, test;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	letters_printed = read(fd, buffer, letters);
	if (letters_printed < 0)
	{
		return (0);
	}
	test = write(STDOUT_FILENO, buffer, letters_printed);
	if (test < 0)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (test);
}
