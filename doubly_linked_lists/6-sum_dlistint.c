#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a list
 * Return: the sum of all the data in a list.
 * @head: head of the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int count = 0;

	while (temp->next != NULL)
	{
		temp->next = temp->next->next;
		count += temp->n;
	}
	return (count);
}
