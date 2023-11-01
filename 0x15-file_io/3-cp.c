#include "main.h"

/**
 * main - Entry to program thar copy file to another
 * @argc: Number of argument
 * @argv: Array of strings
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int fdr, fdw, rt, wt, ec;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr < 0)
		cp_helper(-1, 0, argv);
	fdw = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdw < 0)
		cp_helper(0, -1, argv);
	rt = 1;
	while (rt > 0)
	{
		rt = read(fdr, buf, 1024);
		if (rt < 0)
			cp_helper(-1, 0, argv);
		wt = write(fdw, buf, rt);
		if (wt < 0)
			cp_helper(0, -1, argv);
	}
	ec = close(fdr);
	if (ec < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdr);
		exit(100);
	}
	ec = close(fdw);
	if (ec < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdr);
		exit(100);
	}
	return (0);
}

/**
 * cp_helper - Shorten cp
 * @file_from: File_from
 * @file_to: File_to
 * @argv: List of argument
 *
 * Return: Nothing
 */
void cp_helper(int file_from, int file_to, char **argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
