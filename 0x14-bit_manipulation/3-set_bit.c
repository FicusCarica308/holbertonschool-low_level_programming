#include <stdio.h>
#include "holberton.h"
/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int op;

	if (index > 64)
		return (-1);

	op = n | 1 << index;
	*n = op;
	return (1);
}
