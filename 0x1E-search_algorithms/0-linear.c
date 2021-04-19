#include "search_algos.h"
/**
* linear_search - This function will return the index of a value from an array
*@size: The size of the given array
*@array: The array that will be searched
*@value: The value we are searching for
*Return: returns the index or -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
		unsigned int index = 0;


	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
