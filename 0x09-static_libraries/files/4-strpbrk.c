#include <stdio.h>
#include "holberton.h"
/**
 *_strpbrk - will return the pointer if one of a string of character is found
 *@s: the string that will be compared
 *@accept: the string that *s will be compared to
 *Return: will return a pointer to the first occurence of a matching character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	return (NULL);
}
