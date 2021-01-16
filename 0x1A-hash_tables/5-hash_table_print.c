#include "hash_tables.h"

/**
*print_ele - prints the element our hash table array
*@ele_count: ele_count is how many elements are left to print from the array
*@temp: this is the current index value of our hash array from origin function
*Return: returns ele_count minus one to signal a element has been printed
*/
int print_ele(unsigned int ele_count, hash_node_t *temp)
{
	printf("'%s': '%s'", temp->key, temp->value);
	if (ele_count > 1)
	{
		ele_count--;
		printf(", ");
	}
	return (ele_count);
}

/**
 *element_count - finds how many elements need to be printed from hash list
 *@ht: the hash table struct
 *@index_max: the max index of our hash list
 *Return: returns the amount of elements to be printed (count)
 */
int element_count(const hash_table_t *ht, unsigned int index_max)
{
	unsigned int count = 0, index = 0;
	hash_node_t *temp = NULL;

	for (index = 0; index < index_max; index++)
		if (ht->array[index] != NULL && ht->array[index]->next == NULL)
			count++;
		else
		{
			temp = ht->array[index];
			while (temp != NULL)
			{
				count++;
				temp = temp->next;
			}
		}
	return (count);
}

/**
 *hash_table_print - will print out a given hash table
 *@ht: the hash table struct containing hash array list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index_max, index, ele_count;
	hash_node_t *temp = NULL;

	index_max = ht->size - 1;
	ele_count = element_count(ht, index_max);

	printf("{");
	for (index = 0; index < index_max && ele_count != 0; index++)
	{
		temp = ht->array[index];
		if (temp != NULL && temp->next == NULL)
			ele_count = print_ele(ele_count, temp);
		else
			while (temp != NULL)
			{
				ele_count = print_ele(ele_count, temp);
				temp = temp->next;
			}
	}
	printf("}\n");
}
