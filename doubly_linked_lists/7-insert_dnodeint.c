#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp_2 = temp->next;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = new_node;
	unsigned int i = 0;
	
	if (ned_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while (i != idx)
	{
		temp->next = ptr;
		ptr->prev = temp;
		ptr->next = temp_2;
		temp_2->prev = ptr;
		i++;
	}

	else
	{
		return (new_node);
	}
}
