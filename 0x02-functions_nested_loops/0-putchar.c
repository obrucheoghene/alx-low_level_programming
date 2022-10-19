#include <stdio.h>
/**
 * main - entry level
 * Description: Print _putchar
 * Return: Always (0) success
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	/* strings are arrays that ends with \0*/
	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	/*print newline*/
	putchar('\n');
	return (0);
}
