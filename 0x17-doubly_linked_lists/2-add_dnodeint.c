#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of a double linked list
 * @head: pointer to pointer to head
 * @n: value of new node
 *
 * Return: Address of new node if successful, NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;

	if (!temp)
	{
		*head = new;
		return (new);
	}

	new->next = temp;
	temp->prev = new;
	*head = new;

	return (new);
}
