#include "lists.h"

/**
 * pop_listint - pop list node
 * @head: pointer to head pointer
 *
 * Return: head data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = 0;

	if (temp != NULL)
	{
		/* move to the next node to become head */
		*head = (*head)->next;
		n = temp->n;
	}
	free(temp);
	return (n);

}
