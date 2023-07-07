#include "hash_tables.h"

/**
 * hash_table_set - Adding or updating an element in a hash table.
 * @ht: Is a pointer to the hash table.
 * @key: Is the key to add - cannot be an empty string.
 * @value: Is the value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*Declaration.*/
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	/*Checking the arguments.*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/*Duplicating the value.*/
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	/*Finding the index of the key in the hash table.*/
	index = key_index((const unsigned char *)key, ht->size);
	/*Iterating over the linked list at the index.*/
	for (i = index; ht->array[i]; i++)
	{
		/* If the key already exists, update the value and return.*/
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	/*If the key does not exist, so create a new node and add it to the linked list.*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
