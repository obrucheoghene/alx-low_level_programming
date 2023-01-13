#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of dlistint_t list
 * @head: pointer to pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int pos = 1;

	if (!temp)
		return (-1);

	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			temp->next->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	else
		temp = temp->next;
	while (temp)
	{
		if (pos == index)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		pos++;
		temp = temp->next;
	}
	return (-1);
}
