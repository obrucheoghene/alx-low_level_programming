#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string arg
 *
 * Return: encoded or decoded strings
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i]  >= 65 && s[i] <= 90)
		{
			if (s[i] >= 78)
				s[i] = s[i] - 13;
			else
				s[i] = s[i] + 13;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i] >= 110)
				s[i] = s[i] - 13;
			else
				s[i] = s[i] + 13;
		}
	}
	return (s);
}

