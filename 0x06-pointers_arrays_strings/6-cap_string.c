#include <stdio.h>
#include "holberton.h"
/**
 *cap_string - changes lowercase letters to uppercase
 *@a: the string to be converted
 *Return: returns the string completed
 */
char *cap_string(char *a)
{
	int i = 0;
	int j = 0;
	char ascii[] = {' ', '\n', '.', '\t', ',', ';', '!',
			'?', '"', '(', ')', '{', '}' };

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (a[i - 1] == ascii[j])
			{
				if (a[i] >= 97 && a[i] <= 122)
				{
					a[i] = a[i] - 32;
				}
			}
		}

	}
	return (a);
}
