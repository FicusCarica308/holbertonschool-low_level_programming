#include <stdio.h>
#include "holberton.h"
/**
 *_memset - This function fills memory with a constant byte
 *@s: This is the array that we will be filling
 *@b: this is what we will be filling / changing the array with
 *@n: This is how many bytes/array slots that we wanna fill
 *Return: returns the string *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
