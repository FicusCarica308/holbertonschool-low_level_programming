#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *sum_them_all - this function finds the sum of a variable number of ints
 *@n: # of arguments
 *Return: returns the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	unsigned int add = 0;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
		add += va_arg(vlist, int);
	va_end(vlist);
	return (add);
}
