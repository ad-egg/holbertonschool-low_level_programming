#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: key whose value is to be retrieved
 * Return: value associated with key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index;
	hash_node_t *temp = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			value = strdup(temp->value);
		temp = temp->next;
	}
	return (value);
}
