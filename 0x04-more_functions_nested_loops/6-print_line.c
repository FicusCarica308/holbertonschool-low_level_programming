#include <stdio.h>
#include "holberton.h"
/**
 *print_line - prints a line of underscores specified by n
 *@n: The number of undersores to print
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
