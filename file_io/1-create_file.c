#include "main.h"

/**
 * create_file - function that create file
 * @filename: the name of file to create
 * @text_content: the content to create in filename
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;
	size_t len;
	ssize_t new;

	if (filename == NULL)
		return (-1);
	ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (ptr == -1)
			return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		new = write(ptr, text_content, len);

		if (new == -1)
		{
			close(ptr);
			return (-1);
		}
	}

	close(ptr);
	return (1);
}
