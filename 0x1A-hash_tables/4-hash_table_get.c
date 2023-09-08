#include "hash_tables.h"

/**
 * hash_table_get - retrives the value associated with a key
 * from a hash table
 *
 * @ht: the hast table to look into
 * @key: the key to the value
 *
 * Return: the value associated to the key or NULL if nothing is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	/* Checks if the table or key passed is (null)*/
	if (!ht || !key)
		return (NULL);
	/* Getting the index where the key is */
	index = key_index((const unsigned char *)key, ht->size);

	/* A condition where the key is the only one in that index */
	while (ht->array[index])
	{
		if (*(ht->array[index]->key) == *key)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
