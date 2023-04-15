#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	bool first;

	if (ht == NULL)
	{
		exit(0);
	}
	i = 0;
	current = ht->array[i];
	printf("{");
	first = true;
	while (i != ht->size)
	{
		if (ht->array[i] != NULL)
		{
			while (current != NULL)
			{
				if (!first)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				first = false;
				current = current->next;
			}
		}
		i++;
		current = ht->array[i];
	}
	printf("}\n");
}
