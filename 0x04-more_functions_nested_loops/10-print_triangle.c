#include <stdio.h>
#include "holberton.h"
/**
 *print_triangle - print a triangle
 *@size: the length of the triangle
 */
void print_triangle(int size)
{
	int space;
	int col;
	int row;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size - row; space++)
				_putchar(' ');
			for (col = 1; col <= row; col++)
				_putchar('#');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
