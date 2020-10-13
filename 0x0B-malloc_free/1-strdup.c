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
	int strSize = 0;

	if (str[0] == '\0')
		return (NULL);

	strSize = sizeof(str) / sizeof(char);
	new = malloc(sizeof(str));

	if (new == NULL)
		return (NULL);

	for (i = 0; i <= strSize; i++)
		new[i] = str[i];
	return (new);
}
