#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number of times
 * return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d,", i * j);
			else if (j == n)
				printf("%3d\n" i * j);
			else
				printf("%3d," i * j);
		}
	}
}
