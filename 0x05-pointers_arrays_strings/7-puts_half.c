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

	l = (_strlen(str) - 1) / 2;
	for (i = l + 1; i != '\0'; i++)
		_putchar(str[i]);
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

