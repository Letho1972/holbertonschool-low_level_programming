#include "hash_tables.h"
/**
 * hash_table_get - return the value with key
 * @ht: The hash tabl
 * @key: The key
 * Return: The value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *elem = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	elem = ht->array[index];

	if (elem == NULL)
		return (NULL);

	while (strcmp(key, elem->key) != 0)
		elem = elem->next;

	return (elem->value);
}
