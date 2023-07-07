#include "hash_tables.h"

/**
 * hash_table_get - Retrieving the value associated with
 *                  a key in a hash table.
 * @ht: Is a pointer to the hash table.
 * @key: Is the key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*Declaration.*/
	hash_node_t *node;
	unsigned long int index;

	/*Checking for arguments*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*Finding the index of the key in the hash table.*/
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	/*Iterating over the linked list at the index.*/
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	/*Return the value associated with the key or NULL if the key does not exist*/
	return ((node == NULL) ? NULL : node->value);
}
