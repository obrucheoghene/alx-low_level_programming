#include "main.h"

/**
 * _print_rev_recursion - print string in reverese
 *
 * @s: string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return;
	_putchar(*(s + len - 1));
	*(s + len - 1) = '\0';
	_print_rev_recursion(s);
}


/**
 * _strlen - string lenght
 *
 * @s: string args
 *
 * Return: string lenght
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
