#include "hash_tables.h"

/**
 * key_index - Getting the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: Is the key to get the index of.
 * @size: Is the size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Using the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Returning the hash value and modulo the size of the hash table.*/
	return (hash_djb2(key) % size);
}
