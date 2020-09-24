#include <stdio.h>
#include "holberton.h"
/**
 *print_times_table - displayes the times tables all the way up to a specified #
 *@n: this parameter holds the value of the given number for the times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int oper;
	int first;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			oper = i * j;
			if (oper >= 10)
			{
				first = oper;
				while (first >= 10)
				{
					first = first / 10;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');;
				_putchar(first + '0');
				oper = oper % 10;
				_putchar(oper + '0');
			} else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(oper + '0');
			}

		}
		_putchar('\n');
	}
}
