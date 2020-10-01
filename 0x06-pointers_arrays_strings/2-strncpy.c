#include <stdio.h>
#include "holberton.h"
/**
 *_strncpy - copys two strings within the bounds of n
 *@dest: the destination string
 *@src: The source string
 *@n: number of bytes
 *Return: returns the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
