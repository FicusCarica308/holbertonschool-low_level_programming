#include <stdio.h>
#include "holberton.h"
/**
 *leet - this function converts a string into 1337 encoding
 *@w: the string to be encoded
 *Return: returns the final string
 */
char *leet(char *w)
{
	int i;
	int j;
	char ascii[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; w[i] != '\0'; i++)
		for (j = 0; j <= 5; j++)
			if (w[i] == ascii[j] || w[i] == ascii[j] - 32)
				w[i] = nums[j];
	return (w);
}
