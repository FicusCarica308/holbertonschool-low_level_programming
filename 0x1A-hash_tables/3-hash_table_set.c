#include "hash_tables.h"
/**
*check_existence - sets a index of our hash table to a new key/node/value
*@ht: our hash table
*@index: index of our key
*@key: the new key to be added at index
*@value: the new keys value to be added
*Return: returns 0 on failure and 1 on success
*/
int check_existence(hash_table_t *ht, int index, char *value, const char *key)
{
	hash_node_t *temp;

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value;
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}
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
	int exists;
	hash_node_t *new_node = NULL;
	char *dup_key;
	char *dup_value;

	if (key == NULL || ht == NULL || key[0] == '\0')
		return (0);
	if (ht->array == NULL || ht->size == 0)
		return(0);

	index = key_index((const unsigned char *)key, ht->size);
	dup_value = strdup(value);

	exists = check_existence(ht, index, dup_value, key);
	if (exists == 1)
		return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	dup_key = strdup(key);

	new_node->key = dup_key;
	new_node->value = dup_value;

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
		ht->array[index] = new_node;
	return (1);
}
