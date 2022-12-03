#include "lists.h"


/**
 * print_listint_safe - prints all the elements of a singly list
 * @head: pointer to singly list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0;
	const listint_t *temp = head;

	if (head == NULL)
		return (98);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
