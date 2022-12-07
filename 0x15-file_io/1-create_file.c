#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: text content
 *
 * Return 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wlen;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 600);

	if (fd == -1)
		return (-1);

	wlen = write(fd, text_content, strlen(text_content));

	if (wlen == -1)
		return (-1);

	close(fd);

	return (1);

}
