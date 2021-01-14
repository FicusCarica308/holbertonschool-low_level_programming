#include "hash_tables.h"

/**
*hash_table_set - sets a index of our hash table to a new key/node/value
*@ht: our hash table
*@key: the new key to be added at index
*@value: the new keys value to be added
*Return: returns 0 on failure and 1 on success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node = NULL;

	/**
	 *not to self make sure to duplicate value
	 *in some way if checker breaks
	*/
	if (key == NULL || ht == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	/* this is where we add the new node to the empty index*/
	if (ht->array[index] != NULL)
	{
		/*runs if there is a node already at index*/
		/*places new node at begining of list on index*/
		/*printf("index here already");*/
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
		/*runs if there is no node at the index*/
		/*printf("index not here\n");*/
		ht->array[index] = new_node;
	return (1);
}
