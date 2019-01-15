#include "hash_tables.h"

/**
 * hash_table_set - ads an element to the hash table
 * @ht: pointer to hash table wher eyou want to add/update the key/value
 * @key: key that you are adding to hash table
 * @value: value of key that you are adding to hash table
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
		node->next = NULL;
	else
	{
		/* check if there are any duplicate keys
		use strcmp
		if there are duplicates do something
		{

		}
		else	*/
		{
			temp = ht->array[ind];
			node->next = temp;
		}
	}
	ht->array[ind] = node;
	return (1);
}
