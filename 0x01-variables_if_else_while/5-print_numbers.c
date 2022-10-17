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
	char c;

	for (i = 0; i < 10; i += 1)
	{
		c = i + '0'; /* cast int to char */
		putchar(c);
	}
	putchar('\n');
	return (0);
}
