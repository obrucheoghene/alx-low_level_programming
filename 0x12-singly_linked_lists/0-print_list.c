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
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		n++;
		/*move to next node */
		temp = temp->next;
	}

	return (n);
}

