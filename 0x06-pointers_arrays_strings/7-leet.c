#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string args
 *
 * Return: string in 1337
 */

char *leet(char *s)
{
	int i;
	int j;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int l[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
				s[i] = l[j];
		}
		i++;
	}
	return (s);
}
