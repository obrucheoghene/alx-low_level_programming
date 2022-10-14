#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the size of various types'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	double doubleType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(intType));
	printf("Size of double %ld byte(s)\n", sizeof(doubleType));
	printf("Size of float %ld byte(s)\n", sizeof(floatType));
	return (0);
}
