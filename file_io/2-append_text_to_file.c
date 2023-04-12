#include "main.h"

/**
 * append_text_to_file - function that appands text at the end of file
 * @filename: if the name of file
 * @text_content: is the content to appends in filename
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append;
	size_t len;
	ssize_t app;

	if (filename == NULL)
		return (-1);
	append = open(filename, O_WRONLY | O_APPEND);

	if (append == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		app = write(append, text_content, len);
		if (app == -1)
		{
			close(append);
			return (-1);
		}
	}
	close(append);
	return (1);
}
