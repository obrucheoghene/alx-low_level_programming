#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the item to be added
 * @value: The value of the item to be added
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position;
	hash_node_t *new_node, *current_node;
	char *value_dup;


	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = value_dup;
	new_node->next = NULL;

	position = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[position];

	if (current_node == NULL)
		current_node = new_node;
	else
	{
		if (current_node->key == key)
			current_node->value = value_dup;
		else
		{
			new_node->next = current_node;
			current_node = new_node;
		}
	}
	return (1);
}
