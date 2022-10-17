#include <stdio.h>

/**
 * main - Entry level
 *
 * Decription:  prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i; /*interation */

	for (i = 0; i < 10; i += 1)
	{
		putchar(i + '0'); /* + '0' cast int to char */
	}
	putchar('\n');
	return (0);
}
