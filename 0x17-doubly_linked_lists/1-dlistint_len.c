#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a dlistint_t list
 * @h: pointer to the header
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	/* Check if list is empty*/
	if (!temp)
		return (n);

	while (temp)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
