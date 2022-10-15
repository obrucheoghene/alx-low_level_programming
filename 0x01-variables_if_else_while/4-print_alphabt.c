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
	char letters[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;
	int l = 26;

	for (; i < l; i++)
	{
		char let = letters[i];

		if (let != 'e' || let != 'q')
			putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
