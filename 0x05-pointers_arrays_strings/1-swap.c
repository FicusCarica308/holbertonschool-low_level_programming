#include "holberton.h"
#include <stdio.h>
/**
 *swap_int - swaps the values of two integers using pointers
 *@a: first integer pointer to be swapped
 *@b: second integer pointer to be swapped
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
