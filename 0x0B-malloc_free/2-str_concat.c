#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int length(char *str)
{
	int length = 0;
	for (length = 0; str[length] != '\0'; length++)
	{
	}
	return (length);
}
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
	int totalSize = length(s1) + length(s2);

	str = malloc(sizeof(char) + (totalSize * sizeof(char)));

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
