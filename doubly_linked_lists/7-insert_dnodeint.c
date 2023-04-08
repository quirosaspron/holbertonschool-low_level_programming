#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node = *h;
	unsigned int i;
   
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	if (*h == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp_node = temp_node->next;
	}

	new_node->prev = temp_node;
	new_node->next = temp_node->next;
	if (temp_node->next != NULL)
	{
		temp_node->next->prev = new_node;
		temp_node->next = new_node;
	}

	return (new_node);
}
