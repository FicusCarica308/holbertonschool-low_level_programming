#include <stdio.h>
#include "holberton.h"
/**
 *binary_to_uint - this function converts a given base 10 number and converts
 * it to base 2 (decimal to binary)
 *@b: a given string contaning a binary number
 *Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, idxSrt = -1, sum = 0, binary = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
		if (b[i] == 49 && idxSrt == -1)
			idxSrt = i;
	}

	for (i = idxSrt; b[i] != '\0'; i++)
	{
		if (b[i] == 48)
			binary = 0;
		else
			binary = 1;

		sum = (sum * 2) + binary;
	}
	return (sum);
}
