#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a new Hash table
 *
 * @size: the size of the table to be created
 *
 * Return: the address of the new table created
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *myTable = NULL;
	unsigned long int idx = 0;

	myTable = malloc(sizeof(hash_table_t));
	if (!myTable)
		return (NULL);

	myTable->size = size;
	myTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!myTable->array)
		return (NULL);

	while (idx < size)
	{
		myTable->array[idx] = NULL;
		idx++;
	}
	return (myTable);
}
