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
	int check = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			check = 0;
			oper = i * j;
			if(oper >= 10)
			{
				first = oper;
				while(first >= 10)
				{
					first = first / 10;
				}
				_putchar(first + '0');
				oper = oper % 10;
				_putchar(oper + '0');
				check++;
			}else{
			_putchar(oper + '0');
			}

			if (j != 9 && oper < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
