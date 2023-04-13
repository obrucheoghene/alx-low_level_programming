#include "hash_tables.h"

/**
 * hash_table_get - Return the value of a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key.
 *
 * Return: Key value otherwise null.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	node = ht->array[position];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
