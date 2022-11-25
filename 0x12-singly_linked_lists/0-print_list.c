#include "lists.h"

/**
 * print_list - print single linked list
 *
 * @h: pointer to head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");
		n++;
		/*move to next node */
		h = h->next;
	}

	if (h->str != NULL)
		printf("%s\n", h->str);
	else
		printf("[0] (nil)\n");
	n++;

	return (n);
}

