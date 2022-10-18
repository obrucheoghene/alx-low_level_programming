#include <stdio.h>
/**
 * main - entry level
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == j && i == k && i == l)
						continue;
					if ((i <= k) && (j <= l))
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i == 9 && j == 8 && k == 9 && l == 9)
							continue;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



