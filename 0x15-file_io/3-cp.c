#include "main.h"

/**
 * create_buffer - create buffer
 * @file: file
 * @size: buffer size
 *
 * Return: buffer
 */
char *create_buffer(int size, char *file)
{
	char *buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);

	}
	return (buffer);
}


/**
 * close_file - close file
 * @fd: file descriptor
 *
 * Return: nothing
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - entery level to our file copier
 * @ac: arg count
 * @av: arg array
 *
 * Return: 0 on success but 97,98,99,100 for error
 */

int main(int ac, char **av)
{
	int from_d, to_d, rd, wt;
	char *from_file, *to_file, *buffer;
	int size = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = *(av + 1);
	to_file = *(av + 2);
	buffer = create_buffer(size, to_file);
	from_d = open(from_file, O_RDONLY);
	/*if file_from does not exist, or not readable, exit with code 98 */
	if (from_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	rd = read(from_d, buffer, size);
	to_d = open(to_file,  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rd > 0)
	{
		wt = write(to_d, buffer, size);
		if (to_d == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
			exit(99);
		}
		rd = read(from_d, buffer, size);
		to_d = open(to_file, O_WRONLY | O_APPEND);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(99);
	}
	close(from_d);
	close(to_d);
	return (0);
}
