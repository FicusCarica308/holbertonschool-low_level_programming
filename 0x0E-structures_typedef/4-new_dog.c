#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *length - finds the length of a string given
 *@s: the string
 *Return: returns the length of the string
 */
int length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
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
	int length1 = length(name);
	int length2 = length(owner);
	char *store_owner;
	char *store_name;

	dog_dog = malloc(sizeof(dog_t));
	if (dog_dog == NULL)
	{
		free(dog_dog);
		return (NULL);
	}

	store_owner = malloc(length2 * sizeof(char));
	if (store_owner == NULL)
	{
		free(dog_dog);
		free(store_owner);
		return (NULL);
	}
	store_name = malloc(length1 * sizeof(char));
	if (name == NULL)
	{
		free(dog_dog);
		free(store_owner);
		free(store_name);
		return (NULL);
	}

	dog_dog->name = name;
	dog_dog->age = age;
	dog_dog->owner = owner;

	return (dog_dog);
}
