#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: Is the string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/*Initializing the hash value.*/
	unsigned long int hash;
	int c;

	/*Iterating over the string and update the hash value.*/
	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	/*Returning the hash value.*/
	return (hash);
}
