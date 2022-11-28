#include "lists.h"

/**
 * listint_len - return number of element in linked list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
