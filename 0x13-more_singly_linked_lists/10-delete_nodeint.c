#include "lists.h"


/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to pointer head;
 * @index: index
 *
 * Return: 1 if success or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *node_at_index = *head;
	unsigned int i = 0;


	while (i < index && node_at_index != NULL)
	{
		/*current node becomes prev before incrementing*/
		prev = node_at_index;
		node_at_index = node_at_index->next;
		i++;
	}
	if (i == index && node_at_index != NULL)
	{
		
		/*if index is 0*/
		if (index == 0)
			*head = node_at_index->next;
		else
			prev->next = node_at_index->next;
		/*free node_at_index*/
		free(node_at_index);
		return (1);
	}
	return (-1);
}
