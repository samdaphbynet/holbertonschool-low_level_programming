#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 *
 */

void error_exit(const char * file_name, int err_code)
{
	dprintf(STDERR_FILENO, "Error: can't %s %s\n", err_code == 98 ? "read from file" : "write to", file_name);
	exit(err_code);
}

/**
 *
 *
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
 *
 *
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
