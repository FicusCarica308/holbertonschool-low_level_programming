#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - will callback a function for every element of an array
 *@array: The array that we will cycle through
 *@size: The size of the array
 *@action: The function pointer to the given function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
