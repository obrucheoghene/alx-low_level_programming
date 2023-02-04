#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("%2d\n", i * j);
			}
			else
			{
				printf("%2d, ", i * j);
			}
		}
	}
}
