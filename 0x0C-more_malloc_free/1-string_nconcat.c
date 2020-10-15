#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *string_nconcat - a function the concats two strings
 *@s1: The string that will be added to
 *@s2: The string that will be added to s1
 *@n: The number of character that will be included from s2 in s1
 *Return: returns a pointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (n >= (unsigned int)length2)
		n = length2;

	str = malloc(length1 + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
