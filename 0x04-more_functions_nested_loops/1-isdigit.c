#include <stdio.h>
#include "main.h"

/**
* _isdigit - check if digit
* @c: character
*
* Return: Always (0) false and 1 true
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
