#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	hash_table_t *table = ht;

	if (table == NULL)
		return;
	if (table->array == NULL)
		return;
	for (index = 0; index < table->size; index++)
	{
		node = table->array[index];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(table->array);
	free(table);
}
