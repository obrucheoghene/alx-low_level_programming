#include "main.h"

/**
 * reverse_array - reserve array
 *
 * @a: array
 * @n: array lenght
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	for (i = 0; i < (n / 2); i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
	putchar('\n');
}
