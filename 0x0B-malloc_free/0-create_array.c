#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - This function creates an array using a given size and
 * intializes it with a given char
 *@size: The given size of the array
 *@c: The char the array is gonna be intialized with
 *Return: Returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
