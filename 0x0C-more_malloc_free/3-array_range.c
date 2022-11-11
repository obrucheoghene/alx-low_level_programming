#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min range
 * @max: max range
 *
 * Return: pointer to array
 */


int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	/* if min > max, return NULL */
	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	/* If malloc fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* populate array items */
	while (min <= max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}

	return (ptr);
}
