#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - reverses a given array
 *@n: the number of elements in the array
 *@a: the array given
 */

void reverse_array(int *a, int n)
{
	int holder;
	int i = n - 1;
	int j = 0;

	for ( ; j < i; i--)
	{
		holder = a[j];
		a[j] = a[i];
		a[i] = holder;
		j++;
	}
}
