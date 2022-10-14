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
	long int longIntType;
	long long int loloIntType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(intType));
	printf("Size of long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(loloIntType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
