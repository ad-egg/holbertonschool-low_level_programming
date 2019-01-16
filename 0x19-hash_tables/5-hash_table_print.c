#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	unsigned int no = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if ((no > 0) && (temp != NULL))
			printf(", ");
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
