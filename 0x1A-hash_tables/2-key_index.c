#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Hash item Key
 * @size: Size of hash table
 * Return: Index for the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
