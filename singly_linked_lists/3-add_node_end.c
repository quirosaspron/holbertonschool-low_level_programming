#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * Return: The address of the new element or NULL if it failed
 * @head: the head of the linked list
 * @str: string to be used as element of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i;
	list_t *ptr = *head;
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new_node->str = strdup(str);
	new_node->len = i;

	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	
	return (new_node);
}
