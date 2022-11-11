#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 arg
 * @s2: string 2 arg
 * @n: number of s2 char to concat
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(strlen(s1) + n + 1);

	/*If the function fails, it should return NULL*/
	if (ptr == NULL)
		return (ptr);


	/* copy s1 to ptr*/
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	/* add n bytes of s2*/
	while (s2[j] != '\0' && j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	/* end string */
	ptr[i] = '\0';

	return (ptr);
}
