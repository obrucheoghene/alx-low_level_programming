#include "main.h"

/**
 * puts_half - reverse strings
 * @str: string arg
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int l;
	int n;

	l = _strlen(str);

	n = (_strlen(str)) / 2;
	if (l % 2 == 1)
		n++;

	for (i = n; i < l; i++)
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

