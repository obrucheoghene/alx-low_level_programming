#include "lists.h"

/**
 * add_node_end - add nodet to end;
 *
 * @head: head
 * @str: string
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *dup = strdup(str);
	list_t *temp;

	if (new == NULL || dup == NULL)
		return (NULL);

	new->str = dup;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}


