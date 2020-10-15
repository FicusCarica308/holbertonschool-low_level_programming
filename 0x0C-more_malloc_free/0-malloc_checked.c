#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *malloc_checked - a functions that allocates memory using malloc and checks if
 *it fails to allocate the memory
 *@b: a unsinged integer containing a amount of bytes
 *Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
