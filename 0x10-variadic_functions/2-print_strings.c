#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings with separators
 *
 * @separator: separator args
 * @n: number of args
 * @...: variadic args
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str_arg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str_arg =  va_arg(ap, char *);
		/* If separator is NULL, don’t print it */
		if (str_arg != NULL)
			printf("%s", str_arg);
		else
			printf("%s", "nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

