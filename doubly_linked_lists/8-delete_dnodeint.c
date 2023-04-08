#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * Return: 1 if successful or -1 if not successful
 * @head: head of the list
 * @index: index of the list where the new node should be added
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *prev;
	dlistint_t *next;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (-1);
	}
	prev = temp->prev;
	next = temp->next;
	if (prev != NULL)
	{
		prev->next = next;
	}
	if (next != NULL)
	{
		next->prev = prev;
	}
	free(temp);
	return (1);
}
