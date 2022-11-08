#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value
 * @n: number
 * Return: number absolute
 */
int _abs(int n)
{
	if (n < 0)
		return (0 - n);
	else
		return (n);
}

