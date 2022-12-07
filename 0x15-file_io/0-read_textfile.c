#include "main.h"

/**
 * read_textfile - read text file
 * @filename: filename
 * @letters: letters
 *
 * Return: numbers of letters printed else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rlen, wlen;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rlen = read(fd, buf, letters);

	if (rlen == -1)
		return (0);

	wlen = write(STDOUT_FILENO, buf, letters);

	if (wlen == -1)
		return (0);
	close(fd);

	return (wlen);

}
