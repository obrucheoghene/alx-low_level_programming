#include "main.h"

/**
 * _strlen - calculate lenght of string
 * @str : string
 * Return: number of character
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;

	return (count);
}
