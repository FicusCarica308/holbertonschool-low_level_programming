#include <stdio.h>
#include "holberton.h"
/**
 *rot13 - this function converts a string into rot13 encoding
 *@w: the string to be encoded
 *Return: returns the final string
 */
char *rot13(char *w)
{
	int i = 0;
	int j = 0;
	char ascii[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
			'y', 'v', 'w', 'x', 'y', 'z'};

	char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'y', 'v', 'w',
		        'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		        'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			if (w[i] == ascii[j])
			{
				w[i] = rot[j];
			}
		}
	}
	/*	else
		w[i] = rot[j] - 32;*/
	return (w);
}
