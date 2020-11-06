#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - counts the amount of bits you would need to flip
 *to create another given number
 *@n: the number we start with
 *@m: the number we want to flip to
 *Return: returns the amount of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;

	/*will run until both bits have been changed to 0*/
	while (n > 0 || m > 0)
	{
		/*checks if the current bit is not the same and needs to be flipped*/
		if ((n & 1) != (m & 1))
			flips++;
		/*increments the bits until the numbers are equal to 0000 0000*/
		n = n >> 1;
		m = m >> 1;
	}
	/*returns flips*/
	return (flips);
}
