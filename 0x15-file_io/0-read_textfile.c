#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It reads the text file and prints it  to STDOUT.
 * @filename: The text file to be  read.
 * @letters: The number of letters to be read.
 * Return: k- An actual number of bytes read and printed
 *        0 when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t k;
	ssize_t l;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(fd);
	return (k);
}
