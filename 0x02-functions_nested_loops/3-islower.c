#include <stdio.h>
#include "main.h"

/**
 * _islower - check is character is lower case
 * @c: input charater
 * Return: true 1, false 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
