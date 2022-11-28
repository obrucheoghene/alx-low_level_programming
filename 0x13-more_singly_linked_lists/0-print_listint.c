#include "lists.h"


/**
 * print_listint - prints all the elements of a singly list
 * @h: pointer to singly list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
