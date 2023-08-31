#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - computes the index of a given key
 * @key: the key
 * @size: the size of the hash table
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
