#include "function_pointers.h"

/**
 * array_iterator - execute action on array items
 * @array: pointer to array
 * @size: array size
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		return;

	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
