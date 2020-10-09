#include <stdio.h>
#include "holberton.h"
/**
 *_memcpy -  This function copys a specified memory area
 *@dest: this contains our destination string
 *@src: this contains out source string
 *@n: This contains the amount of bytes to be copied from the source string
 *Return: returns a pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src != '\0' && i < n; i++)
		dest[i] = src[i];
	return (dest);
}
