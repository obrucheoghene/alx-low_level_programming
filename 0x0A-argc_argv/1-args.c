#include <stdio.h>

/**
 * main - entry level
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

