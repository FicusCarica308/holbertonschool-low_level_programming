#include <stdio.h>
#include "holberton.h"
/**
 *_strchr - This functions finds a character in a string
 *@s: the string to be searched
 *@c: the char to be found
 *Return: returns a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
