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
	size_t jump, start, end, i;

	if (!array)
		return (-1);

	start = 0;
	jump = sqrt(size);
	end = jump;

	while (array[start] < value && array[end] < value && end != (size - 1))
	{
		start = end;
		end = start + jump;

		if (end >= size)
		{
			end = size - 1;
		}

	}
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
