#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a copy of a string in memory
 *
 * @str: string
 *
 * Return: pointer to copy
 */

char *_strdup(char *str)
{
	char *copyString;

	if (str == NULL)
		return (NULL);
	copyString = malloc(sizeof(char) * strlen(s) + 1);

	if (copyString == NULL)
		return (NULL);
	strcpy(copyString, str);
	return (copyString);
}
