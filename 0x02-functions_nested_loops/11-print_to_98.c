#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n < 98 || n > 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}
