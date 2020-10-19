#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees a given dogs struct
 *@d: the pointer to the struct to be freed
 */
void free_dog(dog_t *d)
{
	free(d);
}
