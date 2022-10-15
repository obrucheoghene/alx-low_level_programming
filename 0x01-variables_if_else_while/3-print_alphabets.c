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
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int l = 52;

	for (; i < l; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
