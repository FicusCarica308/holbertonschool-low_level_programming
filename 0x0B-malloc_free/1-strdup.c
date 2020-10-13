#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - will return a pointer to a new string thats a copy of a given
 *string
 *@str: The string that we will make a copy of in memory
 *Return: returns the pointer to the new string
 */
char *_strdup(char *str)
{
	char *new;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	new = malloc(sizeof(char) * length);
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	return (new);
}
