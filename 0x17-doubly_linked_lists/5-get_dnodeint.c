#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a double linked list
 * @head: pointer to head node
 * @index: index of nth node
 *
 * Return: nth Node or NULL if does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (!temp)
		return (NULL);

	while (temp)
	{
		if (n == index)
			return (temp);
		else if (n > index)
			return (NULL);
		n++;
		temp = temp->next;
	}

	return (NULL);
}
