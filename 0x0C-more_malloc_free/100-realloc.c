#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - eallocates a memory block using malloc and free
 *
 * @ptr: Pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: Return pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == 0 && ptr == NULL)
		return (NULL);

	/* If new_size is equal to zero, and ptr is not NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	/* if ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (new_ptr);

	/* If new_size == old_size do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	while (i < new_size)
	{
		new_ptr[i] = *((char *)ptr + i);
		i++;
	}

	free(ptr);
	return (new_ptr);
}
