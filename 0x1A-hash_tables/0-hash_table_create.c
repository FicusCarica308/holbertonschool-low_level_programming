#include "hash_tables.h"
/**
*hash_table_create - this function creates a hash table from a given size
*@size: size is the size of the hash table we are going to create
*Return: returns a pointer to the newly created hash table or NULL if failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	array = malloc(sizeof(NULL) * 1024);
	if (array == NULL)
		return (NULL);

	new_table->array = array;
	new_table->size = size;

	return (new_table);
}
