#include "lists.h"

/**
 * free_dlistint - Free a double linked list
 * @head: pointer to head node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	if (!head)
		return;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}

}
