#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *str_concat - concatenate two strings
 *@s1: the src string
 *@s2: The string that will be added to s1
 *Return: returns pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;

	str = malloc(sizeof(s1) + sizeof(s2)/* + sizeof(char)*/);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
