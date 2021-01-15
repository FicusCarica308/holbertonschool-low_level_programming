#include "hash_tables.h"

/**
*hash_table_delete - frees a hash table array and its nodes
*@ht: our hash table to be freed
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index_max, index;
	hash_node_t *cur = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	index_max = ht->size - 1;

	for (index = 0; index < index_max; index++)
	{
		cur = ht->array[index];
		if (cur != NULL && cur->next == NULL)
		{
			free(cur->value);
			free(cur->key);
			free(cur);
		}
		else
			while (cur != NULL)
			{
				temp = cur;
				cur = temp->next;
				free(temp->value);
				free(temp->key);
				free(temp);
			}
	}
	free(ht->array);
	free(ht);
}
