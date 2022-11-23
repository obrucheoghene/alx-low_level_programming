#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all args
 *
 * @n: number of args
 * @...: variadic args
 *
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap; /*initialize arg list*/

	/*if n == 0 return 0*/
	if (n == 0)
		return (0);
	/*start arg list */
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
