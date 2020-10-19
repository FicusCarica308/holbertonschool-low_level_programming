#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - a function to initialize a struct for a dog
 *@d: a pointer to the previously declared struct
 *@name: the name of of the dog owner to be put into the struct
 *@age: the age of the dog to be put into the struct
 *@owner: the name of the owner to be put into the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
