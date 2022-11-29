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
	listint_t *pre;
	listint_t *new = malloc(sizeof(listint_t));

	if (new != NULL && *head != NULL)
	{
		while (i < idx && *head != NULL)
		{
			pre = *head;
			head = &(*head)->next;
		}

		if (i == idx && head != NULL)
		{
			new->n = n;
			pre->next = new;
			new->next = *head;
		}
	}
	return (NULL);
}
