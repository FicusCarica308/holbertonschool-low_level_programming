#include <stdio.h>
#include "holberton.h"
/**
 *_strncat - concatenates two strings using at most n bytes
 *@dest: Destination string
 *@src: Soruce string
 *@n: the number of bytes it will count to
 *Return: returns the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	for (length = 0; dest[length] != '\0'; length++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length + i] = '\0';
	return (dest);
}
