#include "hash_tables.h"

/**
 *hash_table_create - a fuction to create a hash table
 *@size: size of the hash table
 *Return: pointer to the hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hashTable;

	if (size == 0)
		return (NULL);

	hashTable = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!hashTable)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (!(hashTable->array))
		return (NULL);

	return (hashTable);


}

