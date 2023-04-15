#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if successful 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *current, *new_node;
	char *dup_value, *dup_key;

	if (*key == '\0' || key == NULL || ht == NULL || value == NULL)
	{
		return (0);
	}
	dup_value = strdup(value);
	dup_key = strdup(key);
	i = key_index((const unsigned char *)dup_key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = (char *)dup_key;
	new_node->value = dup_value;
	new_node->next = NULL;
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new_node;
		return (1);
	}
	if (ht->array[i] != NULL)
	{
		current = ht->array[i];
		while (current->next != NULL && current->key != dup_key)
		{
			current = current->next;
		}
		if (current->next == NULL && current->key != dup_key)
		{
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
			return (1);
		}
		if (current->key == dup_key)
		{
			current->value = dup_value;
			return (1);
		}
	}
	return (0);
}
