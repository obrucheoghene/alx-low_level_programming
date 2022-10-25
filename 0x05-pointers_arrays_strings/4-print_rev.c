#include "main.h"

/**
 * print_rev - print strings in reverse
 * @str: string arg
 * Return: void
 */

void print_rev(char *str)
{
	int i;
	int len;

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
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

