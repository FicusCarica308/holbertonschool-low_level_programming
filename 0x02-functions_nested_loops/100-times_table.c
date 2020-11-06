#include <stdio.h>
#include "holberton.h"
/**
 *
 *
 */
void print_rec(int num)
{
	if (num >= 10)
		print_rec(num / 10);
	_putchar((num % 10) + '0');
}
/**
 *
 */
void print_space(int num)
{
	if (num < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	if (num >= 10 && num < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	if (num > 100)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
 *
 */
void print_num(int num)
{
	if (num == 10)
	{
		_putchar('1');
		_putchar('0');
	}
	else
		print_rec(num);
	print_space(num);
}
/**
 *print_times_table - displayes the times tables all the way up to a specified #
 *@n: this parameter holds the value of the given number for the times table
 */
void print_times_table(int n)
{
	int i = 0, j = 0, oper = 0, hold = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				oper = i * j;
				if (oper > 9)
					print_num(oper);
				else
				{
					_putchar(oper + '0');
					print_space(oper);
				}
			}
			_putchar('\n');
		}
	}
}
