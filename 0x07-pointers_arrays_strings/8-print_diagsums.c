#include <stdio.h>
#include "holberton.h"

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i = i + (size + 1))
	{
		sum = sum + a[i];
	}
	for (j = size * (size - 1); j > 0; j = j - (size - 1))
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d", sum, sum2);
}
