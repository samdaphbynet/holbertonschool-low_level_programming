#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: the file to prints
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t read, new;
	FILE *ptr;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
	{
		return (0);
	}
	ptr = fopen(filename, "r");

	if (ptr == NULL)
		return (0);

	read = fread(buf, sizeof(char), letters, ptr);

	if (read == -1)
	{
		fclose(ptr);
		free(buf);
		return (0);
	}
	buf[read] = '\0';
	new = write(STDOUT_FILENO, buf, read);

	if (new != read)
	{
		fclose(ptr);
		free(buf);
		return (0);
	}
	fclose(ptr);
	free(buf);
	return (new);
}
