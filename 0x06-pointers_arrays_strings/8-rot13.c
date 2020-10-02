#include <stdio.h>
#include "holberton.h"
/**
 *rot13 - this function converts a string into rot13 encoding
 *@w: the string to be encoded
 *Return: returns the final string
 */
char *rot13(char *w)
{
	int i;
	int j;
	char ascii[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (w[i] == ascii[j])
			{
				w[i] = rot[j];
				break;
			}
		}
	}
	return (w);
}
