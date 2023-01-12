#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: pointer to the header
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	/* Check if list is empty*/
	if (!temp)
		return (n);

	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
