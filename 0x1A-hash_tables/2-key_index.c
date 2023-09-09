#include "hash_tables.h"

/**
 *key_index - function to return an index to store the value in hash map
 *@key: key
 *@size: size oh the hash table
 *Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
