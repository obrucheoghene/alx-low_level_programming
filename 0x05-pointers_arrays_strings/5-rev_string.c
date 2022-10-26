#include "main.h"

/**
 * rev_string - reverse strings
 * @s: string arg
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char d[_strlen(s)];

	len = _strlen(s);


	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		d[j] = s[i];
		j++;
	}

	for (i = 0; i < len; i++)
	{
		s[i] = d[i];
	}
}

/**
 * _strlen - count string length
 * @str: string arg
 * Return: lenght of str
 */
int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

