#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer to head pointer
 * @idx: index
 * @n: new node data
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tprev = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (i < idx && *head != NULL)
	{
		tprev = *head;
		*head = (*head)->next;
		i++;
	}

	if (i == idx && tprev != NULL)
	{
		new->n = n;
		new->next = tprev->next;
		tprev->next = new;
		return (new);
	}
	return (NULL);
}
