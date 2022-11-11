#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mep;

	mep = malloc(b);
	if (mep == NULL || b == 0)
		exit(98);
	return (mep);
}

