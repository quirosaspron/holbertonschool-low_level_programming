#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to be returned.
 * Return: A pointer to the nth node of the list, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
