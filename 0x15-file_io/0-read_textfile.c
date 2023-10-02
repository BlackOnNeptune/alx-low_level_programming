#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Read a text file and print its contents to STDOUT.
* @filename: Name of the text file.
* @letters: Number of letters to read.
* Return: Actual number of bytes read and printed, or 0 on failure.
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
