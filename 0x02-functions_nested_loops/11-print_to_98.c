#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - this function prints from a given number to 98
 *@n: the number that it is counting up from
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		if (i != 98)
		{
			printf(", ");
	} else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(" ,");
		}
	}
	printf("\n");
}
