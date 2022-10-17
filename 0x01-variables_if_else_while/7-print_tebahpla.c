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

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
