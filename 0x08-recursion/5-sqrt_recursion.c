#include "main.h"

/**
 * _sqrt_recursion - square root
 *
 * @n: number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_cal_sqrt(n));
}

/**
 * _cal_sqrt - calculate square root
 *
 * @n: number
 *
 * Return: square root
 */

int _cal_sqrt(int n)
{
	int i = 1;
	int ans = -1;

	while (i <= n)
	{
		if ((i * i) == n)
		{
			ans = i;
			break;
		}
		if ((i * i) > n)
		{
			break;
		}
		i++;
	}
	return (ans);
}
