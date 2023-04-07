#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * Return: 1 if successful or -1 if not successful
 * @head: head of the list
 * @index: index of the list where the new node should be added
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *temp = *head;
	dlistint_t *temp_2 = temp->next;
	int i = index;

	new_node->d = n;
	while (i != 0)
	{
		temp->next = temp_2->next;
		temp_2->next->prev = temp;
		free(temp_2);
		temp_2 = NULL;
		i--;
	}
	return (1);
}
