#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry level
 *
 * @argc: number of commandline arg
 * @argv: array of pointer to arg
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int result;

	/*number of arguments is wrong, print Error return 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0 &&
			strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "*") != 0 &&
			strcmp(argv[2], "/") != 0 &&
			strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[0])(atoi(argv[1]), atoi(argv[3])));
	
	printf("%d\n", result);

	return (0);


}
