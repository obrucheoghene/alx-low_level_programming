#include <stdio.h>

/**
 * main - entry level
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

