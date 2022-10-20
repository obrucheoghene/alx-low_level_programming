#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10 times
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int t;
	int c;

	for (t = 0; t < 10; t++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

