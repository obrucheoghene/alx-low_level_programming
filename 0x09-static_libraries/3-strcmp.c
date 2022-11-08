#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first arg
 * @s2: second arg
 *
 * Return: difference between the two args
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];

		if (res != 0)
			break;
	}
	return (res);
}
