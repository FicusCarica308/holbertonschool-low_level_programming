#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *array_range - creates a array from a min value to a max value
 *@min: this is our minimum value
 *@max: this is our maximum value
 *Return: returns a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int k = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * max);
	if (arr == NULL)
		return (NULL);
	for (i = min; i < max; i++)
	{
		arr[k] = i;
		k++;
	}
	return (arr);
}
