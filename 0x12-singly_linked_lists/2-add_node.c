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
	char *dup;


	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}


	new->str = dup;
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
