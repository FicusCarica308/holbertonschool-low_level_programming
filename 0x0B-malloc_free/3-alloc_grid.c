#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - will declare a 2d array and return the pointer
 *@width: width holds each the amount of elements in each row
 *@height: height holds the amount of columns in the program
 *Return: returns the pointer to the new 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int j = 0;
	int b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		array[b] = malloc(sizeof(int) * width);
		if (array[b] == NULL)
		{
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[b][j] = 0;
	}

	return (array);
}
