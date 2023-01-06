#include "hash_tables.h"

/**
 * hash_table_get - fxn retrieves value associated with key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if value not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *) key, ht->size);
	node = ht->array[i];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
