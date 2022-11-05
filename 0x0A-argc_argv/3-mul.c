#include <stdio.h>
#include <stdlib.h>

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
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

