#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
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
}
