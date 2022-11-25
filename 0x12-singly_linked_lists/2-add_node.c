#include "lists.h"

/**
 * add_node - add new node
 *
 * @head: pointer to pointer to header
 * @str: string
 *
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		(*head)->next = NULL;
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		return (*head);
	}

	new = malloc(sizeof(list_t));	


	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	return (new);
}
