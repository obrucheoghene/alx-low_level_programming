#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary chars
 * Return: number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int weight = 1;
	int rem;
	int bin;
	int i = 0;

	if (b == NULL)
		return (0);

	/* check if binary charater */
	while (b[i] != '\0')
	{
		if (b[i] < '0'  || b[i] > '1')
			return (0);
		i++;
	}

	bin = atoi(b);

	if (bin == 0)
		return (0);

	while (bin != 0)
	{
		rem = bin % 10;
		dec += rem * weight;
		weight *= 2;
		bin = bin / 10;
	}

	return (dec);

}
