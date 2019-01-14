#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array to be created
 * Return: a hash table or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(size);
	if (hashtable->array == NULL)
		return (NULL);
	return (hashtable);
}
