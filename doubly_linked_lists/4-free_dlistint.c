#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
