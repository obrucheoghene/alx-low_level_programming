#include <stdio.h>

/**
 * main - Entry level
 *
 * Description: print all the alphabet in lowcase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int l = 26;

	for (; i < l; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
