#include "main.h"
#include "stdio.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string pointer
 * @c: character to locate
 *
 * Return: return string pointer
 */

char *_strchr(char *s, char c)
{
	char *f = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				f = s;
				break;
			}
		} while (*s++);
	}
	return (f);
}
