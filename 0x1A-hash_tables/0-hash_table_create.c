#include "hash_tables.h"

/**
 * hash_table_create - Is creating a hash table.
 * @size: Is the size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*Declaration*/
	hash_table_t *ht;
	unsigned long int i;

	/*Allocating memory for the hash table structure.*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/*Setting the size of the hash table.*/
	ht->size = size;
	/*Allocating memory for the hash table array.*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	/*Initializing the hash table array to NULL.*/
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	/*Returning the hash table.*/
	return (ht);
}
