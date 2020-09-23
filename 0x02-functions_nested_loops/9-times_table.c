#include <stdio.h>
#include "holberton.h"
/**
 *times_table - displayes the times tables all the way up to 9
 */
void times_table(void)
{
	int i;
	int j;
	int oper;
	int first;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
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
				}
				_putchar(oper + '0');
			}

		}
		_putchar('\n');
	}
}
