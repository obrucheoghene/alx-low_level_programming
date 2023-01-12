#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a double linked list
 * @head: pointer to head
 * @n: value of new node
 *
 * Return: Address of new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!temp)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;

	return (new);
}
