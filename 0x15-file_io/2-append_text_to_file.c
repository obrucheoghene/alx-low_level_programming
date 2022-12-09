#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) < 0)
		return (-1);

	return (1);
}
