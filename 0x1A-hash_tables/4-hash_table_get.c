#include "hash_tables.h"
/**
*hash_table_get - this function will get the value of a
*given key from a given hash table
*@ht: the given hash table to be checker
*@key: the given key to be found
*Return: returns the key on success and NULL on failure
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp;

	if (ht == NULL || !(*key) || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (ht->array[index]->next == NULL)
		return (ht->array[index]->value);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (temp->key == key)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
