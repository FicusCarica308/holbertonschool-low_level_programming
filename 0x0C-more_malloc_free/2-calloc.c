#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_calloc - allocates memory using the calloc function
 *@nmemb: The amount of elements of the array
 *@size: The size (data type size) of the array
 *Return: returns a pointer to the new space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	for (i = 0; i < size; i++)
		p[i] = 0;

	if (p == NULL)
		return (NULL);

	return (p);
}
