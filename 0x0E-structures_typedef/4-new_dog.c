#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog struct
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the name of the owner
 *Return: returns a pointer to the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_dog;
	int i = 0;
	char *store_owner;
	char *store_name;

	dog_dog = malloc(sizeof(dog_t));
	if (dog_dog == NULL)
	{
		free(dog_dog);
		return (NULL);
	}

	store_owner = malloc(sizeof(owner));
	if (store_owner == NULL)
	{
		free(dog_dog);
		free(store_owner);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
		store_owner[i] = owner[i];

	store_name = malloc(sizeof(name));
	if (store_name == NULL)
	{
		free(dog_dog);
		free(store_owner);
		free(store_name);
		return (NULL);
	}

	for(i = 0; name[i] != '\0'; i++)
		store_name[i] = name[i];

	dog_dog->name = store_name;
	dog_dog->age = age;
	dog_dog->owner = store_owner;

	return (dog_dog);
}
