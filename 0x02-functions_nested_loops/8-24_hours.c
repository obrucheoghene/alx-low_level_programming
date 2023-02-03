#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of jack Baurer
 * starting from 00:00 to 23:59
 * Return: Always 0
 */
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		if (h == 24)
			break;
		printf("%02d:%02d\n", h, m);

		if (m == 59)
		{
			h += 1;
			m = 0;
		}
		else
		{
			m += 1;
		}
	}
}
