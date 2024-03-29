#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print last digits
 * Description: print last digits
 * @n: number
 * Return: number
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		if (n == INT_MIN)
			n = 8;
		else
			n = -1 * n;
	}
	l = n % 10;
	_putchar(l + '0');
	return (l);
}
