#include "main.h"
#include "stdio.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string pointer
 * @accept: accept string
 *
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	do {
		if (_strchr(s, *accept))
		{
			l++;
			continue;
		}
		break;
	} while (*accept++);

	return (l);
}





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
