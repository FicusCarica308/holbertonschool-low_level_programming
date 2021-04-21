#include "search_algos.h"
/**
* binary_search - function that sorts a least to greatest array
*@size: The size of the given array
*@array: The array that will be searched
*@value: The value we are searching for
*Return: returns the index or -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int index = 0, index_2 = 0;
	int sub_index;

	if (array == NULL)
		return (-1);
	size--;

	while (index <= size)
	{
		/*prints array*/
		printf("Searching in array: ");
		for (index_2 = index; index_2 <= size; index_2++)
		{
			printf("%d", array[index_2]);
			if (index_2 != size)
				printf(", ");
		}
		printf("\n");

		/*sorts*/
		sub_index = (index + size) / 2;
		if (array[sub_index] < value)
			index = sub_index + 1;
		else if (array[sub_index] > value)
			size = sub_index - 1;
		else
			return (sub_index);
	}
	return (-1);
}
