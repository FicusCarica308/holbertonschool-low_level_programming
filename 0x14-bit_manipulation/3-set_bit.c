#include <stdio.h>
#include "holberton.h"
/**
 *set_bit - sets the bit of a given index with 1
 *@n: the number we are adding the bit to
 *@index: the index we want to insert our number at
 *Return: returns -1 on failure and 1 if complete
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op;

	if (index >= 64)
		return (-1);

	op = *n | 1 << index;
	*n = op;
	return (1);
}
