#include <stdio.h>
#include "holberton.h"

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int sum2 = 0;
	int sizePlus = size*size;
	int incr1 = size + 1;
	int sizeSub = size * (size - 1);
	int incr2 = size - 1;

	for (i = 0; i < sizePlus; i+=incr1)
	{
		sum = sum + a[i];
	}
	for (j = sizeSub; j > 0; j-=incr2)
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
