#include "search_algos.h"


/**
 * linear_search - Perform linear search
 *
 * @array: Pointer to the first element of array
 * @size: Size of array
 * @value: The value to search for
 * Return: 0 or 1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
