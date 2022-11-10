#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initialize it
 *
 * @size: size of array
 * @c: init char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		str = NULL;
		return (str);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
