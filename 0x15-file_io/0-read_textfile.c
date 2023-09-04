#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read from the file.
 *
 * Return: On success, returns the actual number of bytes read and printed.
 *         Returns 0 when the function fails or if `filename` is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
