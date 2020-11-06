#include <stdio.h>
#include "holberton.h"
/**
 *clear_bit - sets the bit of a given index with 0
 *@n: the number we are adding the bit to
 *@index: the index we want to insert our number at
 *Return: returns -1 on failure and 1 if complete
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op;
	int newIdx;
	unsigned long int shift;

	if (index > 64)
		return (-1);
	newIdx = 1 << index;
	shift = 0 << index;
	op = (*n & ~newIdx) | (shift & newIdx);
	*n = op;
	return (1);
}
