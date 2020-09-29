#include <stdio.h>
#include "holberton.h"
/**
 *print_array - prints and arrays values for a specified amount
 *@a: the string of integers that will be printed
 *@n: the numer that dictates how much of the array will print
 */
void print_array(int *a, int n)
{
	int length = 0;
	int i = 0;

	while (a[length] != '\0')
		length++;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
