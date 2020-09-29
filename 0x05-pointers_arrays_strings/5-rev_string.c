#include <stdio.h>
#include "holberton.h"
/**
 *rev_string - a function that reverses a string
 *@s: the string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int length;
	int j = 0;
	char str[10] = "";

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (i = length; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}

	for (i = 0; i <= length; i++)
		s[i] = str[i];
}
