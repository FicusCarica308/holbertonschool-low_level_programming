#include "hash_tables.h"

/**
*key_index - finds a random index for our hash table that
*we can place a new key into
*@key: The key that we will use the djb2 algorithm on
*@size: the size of our hash array which we will mod the djb2 output to
*Return: will return 0 on failure and the new index on success
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	return (hash_djb2(key) % size);
}
