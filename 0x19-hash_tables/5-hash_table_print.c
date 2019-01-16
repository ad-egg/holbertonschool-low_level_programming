#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	int no = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if ((no > 0) && (ht->array[index + 1] != NULL))
			printf(", ");
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			no++;
			if (temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
