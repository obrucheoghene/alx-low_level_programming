#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of string to concatenate
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

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
