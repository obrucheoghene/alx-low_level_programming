#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digits
 * Description: print last digits
 * @n: number
 * Return: number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l);
	return (l);
}
