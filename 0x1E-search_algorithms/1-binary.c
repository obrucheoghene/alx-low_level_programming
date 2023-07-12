#include "search_algos.h"


/**
 * binary_search - Perform binary search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Value index or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r, i;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");

		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
