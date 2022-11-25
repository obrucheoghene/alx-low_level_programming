#include "lists.h"

/**
 * list_len - singly list lenght
 *
 * @h: pointer to head of singly list
 *
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}

