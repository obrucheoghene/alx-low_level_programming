#include "function_pointers.h"

/**
 * int_index - returns index of match
 * @array: pointer to array
 * @size: array size
 * @cmp: pointer to compare function
 * Return: index of matche array item or -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 1;
	int idx = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		idx = cmp(*(array + i));
		if (idx != 0)
			return (i);
		i++;
	}
	return (-1);
}
