#include <stdio.h>
#include <ctype.h>

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
	int sum = 0;
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		if (isdigit(*argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

