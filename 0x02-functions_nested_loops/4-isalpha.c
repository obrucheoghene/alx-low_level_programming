#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check is character is lower case
 * @c: input charater
 * Return: true 1, false 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
