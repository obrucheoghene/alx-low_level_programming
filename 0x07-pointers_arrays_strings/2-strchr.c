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
	int i = 0;

	while (s[i] != c)
		i++;

	if (s[i] == c)
		return (s + i);

	return (NULL);
}
