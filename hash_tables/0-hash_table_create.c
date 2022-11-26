#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: a pointer to the new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t) * size); /*create hash table*/
	if (new_table == NULL)
		return (NULL);

	return (new_table);
}
