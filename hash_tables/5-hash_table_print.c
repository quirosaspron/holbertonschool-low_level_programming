#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
	{
		exit(0);
	}
	i = 0;
	current = ht->array[i];
	printf("{");
	while (i != ht->size)
	{
		if (ht->array[i] != NULL)
		{
			while (current->next != NULL)
			{
				printf("'%s': '%s',", current->key, current->value);
				current = current->next;
			}
			if (current->next == NULL)
			{
				printf("'%s': '%s'", current->key, curre    nt->value);
			}
		}
		i++;
	}
	printf("}");
	exit(0);
}
