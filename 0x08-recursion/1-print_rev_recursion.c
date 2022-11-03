#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reserve.
 *
 * @s: string args
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
