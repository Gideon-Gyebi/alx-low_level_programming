#include "hash_tables.h"

/**
 * hash_table_delete - Deleting a hash table.
 * @ht: Is a pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	/*Declaration*/
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	/*Iterating over the hash table and free all the nodes.*/
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	/*Freeing the hash table array.*/
	free(head->array);
	/*Freeing the hash table structure.*/
	free(head);
}
