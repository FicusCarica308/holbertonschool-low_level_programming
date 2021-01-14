#include "hash_tables.h"

/**
*
*
*
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL)
        return 0;

    return (hash_djb2(key) % size);
}