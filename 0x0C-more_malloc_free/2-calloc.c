#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - allocates memory for ra
 *
 * @nmemb: arg 1
 * @size: arg 2
 *
 * Return: ponter
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL || size == 0 || nmemb == 0)
		return (NULL);

	return (ptr);
}
