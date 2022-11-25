#include "lists.h"

/**
 * free_list - free memory
 * @head: head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while (head != NULL)
		{
			temp = head;
			free(head->str);
			head = head->next;
			free(temp);
		}
		free(head);
	}
}
