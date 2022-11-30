#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to pointer to list head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		free(temp);

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	free(*head);
}

