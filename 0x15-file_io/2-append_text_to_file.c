#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: A pointer
 * @text_content: The string to append
 *
 * Return: On success, returns 1. On failure, returns -1
 * -1 is returned if filename is NULL, the file doesn't exist,
 * or the user lacks write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len]; len++)
	{

	}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}
