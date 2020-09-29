#include <stdio.h>
#include "holberton.h"
/**
 *rev_string - a function that reverses a string
 *@s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	char *start = s;
	char *end = s;
	char holder;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length - 1; i++)
		end++;
	for (i = 0; i < length / 2; i++)
	{
		holder = *end;
		*end = *start;
		*start = holder;

		start++;
		end--;
	}
}
