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

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(str));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}
