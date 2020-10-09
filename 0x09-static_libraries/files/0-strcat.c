#include <stdio.h>
#include "holberton.h"
/**
 *_strcat - this script is a replacment to strcat (concatenates two strings)
 *@dest: The destination string
 *@src: The source string
 *Return: returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; dest[length] != '\0'; length++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';
	return (dest);
}
