#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: source character lenght to cpy
 *
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len;
	int i;

	src_len = _strlen(src);

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	if (n > src_len)
		dest[i] = '\0';

	return (dest);
}


/**
 * _strlen - calculate lenght of string
 *
 * @s: string arg
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
