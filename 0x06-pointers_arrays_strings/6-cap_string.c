#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string arg
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i > 0)
			{
				if (s[i - 1] == ' ' ||
					s[i - 1] == '\t' ||
					s[i - 1] == '\n' ||
					s[i - 1] == ',' ||
					s[i - 1] == ';' ||
					s[i - 1] == '.' ||
					s[i - 1] == '!' ||
					s[i - 1] == '?' ||
					s[i - 1] == '\"' ||
					s[i - 1] == '(' ||
					s[i - 1] == ')' ||
					s[i - 1] == '{' ||
					s[i - 1] == '}')
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	if (s[0]>= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	return (s);
}
