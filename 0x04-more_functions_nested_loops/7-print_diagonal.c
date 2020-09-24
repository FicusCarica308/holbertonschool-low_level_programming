#include <stdio.h>
#include "holberton.h"
/**
 *print_diagonal - print a diagonal line dictated by a variable
 *@n: the length of the line in slashes
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				if (n != 1)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
