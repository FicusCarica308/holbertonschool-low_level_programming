#include <stdio.h>
#include "holberton.h"
/**
 *get_bit - gets a bit at a given index
 *@n: The number we will be finding the bit of
 *@index: The location of the bit we want to find from right to left
 *Return: returns the bit at that location
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift, num;

	/*checks if index is greater than 8 bits*/
	if (index > 64)
		return (-1);

	shift = n >> index;
	num = shift & 1;
	return (num);
}
