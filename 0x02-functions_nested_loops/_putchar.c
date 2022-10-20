#include <stdio.h>
#include "main.h"
/**
 * _putchar - Print character
 * Description: Print _putchar
 * Return: Always (0) success
 */
void _putchar(char str[])
{
	int i;

	/* strings are arrays that ends with \0*/
	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	/*print newline*/
	putchar('\n');
}
