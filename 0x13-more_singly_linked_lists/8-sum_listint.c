#include "lists.h"

/**
 * sum_listint - sum of all data(n)
 * @head: pointer to head
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
