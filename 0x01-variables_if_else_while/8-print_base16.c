#include <stdio.h>

/**
 * main - Entry level
 *
 * Decription: print all numbers in base 16 in lowercase
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
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
