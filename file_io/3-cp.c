#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 1024

/**
 * error_exit - which prints an error message and exits with a code of 98
 * @a: name of file to print
 * @b: code exit
 */

void error_exit(const char *a, int b)
{
	char *s = "read from file";
	char *ss = "Error: can't";

	dprintf(STDERR_FILENO, "%s %s %s %s\n", s, b == 98 ? s : "write to", a);
	exit(b);
}

/**
 * close_exit - which prints an error message and exits with a code of 100
 * @fd: name of file to print
 */

void close_exit(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	exit(0);
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *file_from, *file_to, buf[BUF_SIZE];
	int fd_from, fd_to;
	ssize_t _read, _write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		error_exit(file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		error_exit(file_to, 99);

	while ((_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		_write = write(fd_to, buf, _read);

		if (_write == -1)
			error_exit(file_from, 99);
	}

	if (_read == -1)
		error_exit(file_from, 98);
	close_exit(fd_from);
	close_exit(fd_to);

	return (0);
}
