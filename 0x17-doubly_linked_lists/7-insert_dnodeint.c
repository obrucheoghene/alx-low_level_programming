#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given postion
 * @h: pointer to pointer to head node
 * @idx: index to add node
 * @n: value of new node
 *
 * Return: Address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int pos = 0; /*current position */

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (temp)
	{
		if (pos == idx - 1)
		{
			if (temp->next)
			{
				new->prev = temp;
				new->next = temp->next;
				temp->next->prev = new;
				temp->next = new;
			}
			else
			{
				temp->next = new;
				new->prev = temp;
			}

			return (new);
		}

		pos++;
		temp = temp->next;
	}

	return (NULL);
}
