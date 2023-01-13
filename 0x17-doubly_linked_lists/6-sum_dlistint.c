#include "lists.h"

/**
 * sum_dlistint - Returns the sum  of elements of a dlistint_t list
 * @head: pointer to the header
 *
 * Return: Sum of element, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	/* Check if list is empty*/
	if (!temp)
		return (sum);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
