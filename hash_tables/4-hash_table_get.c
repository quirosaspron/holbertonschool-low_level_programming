#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key we are looking for
 * Return: the value associated with the element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;
	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (strcmp(current->key, key) != 0 && current->next != NULL)
	{
		current = current->next;
	}
	if (strcmp(current->key, key) == 0)
	{
		return (current->value);
	}
	return (NULL);
}
