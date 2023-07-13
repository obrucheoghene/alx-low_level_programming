#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Perform Jump search
 *
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Value index, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		prev = i;
		i = k * m;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
