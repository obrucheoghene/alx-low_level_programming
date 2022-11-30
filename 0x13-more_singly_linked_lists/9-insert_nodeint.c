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
	listint_t *prev_node;
	listint_t *node_at_index = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	/*if idx == 0*/
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx && node_at_index != NULL)
	{
		/*prev node is current node before increment*/
		prev_node = node_at_index;
		node_at_index = node_at_index->next;
		i++;
	}

	if (i == idx && prev_node != NULL)
	{
		new->next = node_at_index;
		prev_node->next = new;
		return (new);
	}
	return (NULL);
}
