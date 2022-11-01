#include "main.h"
#include "stdio.h"


unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;
	do{
		if (_strchr(s, *accept))
		{
			l++;
		}
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
