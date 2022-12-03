#include "main.h"
#include <unistd.h>
/**
 * _putchar - print  char
 * @c: character to print
 *
 * Return: nothing
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
