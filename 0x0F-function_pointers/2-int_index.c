#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer and returns its index
 *@size: the size of the array
 *@array: the array given
 *@cmp: a pointer to a function given
 *Return: returns the index of the integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
