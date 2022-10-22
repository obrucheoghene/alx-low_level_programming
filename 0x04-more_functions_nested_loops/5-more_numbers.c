#include <stdio.h>
#include "main.h"

/**
* more_numbers - print 10 times the number from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int t;
	int n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
			_putchar(n + '0');
		_putchar('\n');
	}
}

