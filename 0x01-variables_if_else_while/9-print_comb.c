#include <stdio.h>

/**
 * main - Entry level
 *
 * Decription: print all possible combinations of single-digit numbers
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i; /*interation */

	for (i = 0; i < 10; i += 1)
	{
		putchar(i + '0'); /* + '0' cast int to char */
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
