#include <stdio.h>
#include "holberton.h"
/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: The string to be checked
 *@accept: The string that is being used to compare
 *Return: returns the count of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
	int count = 0;

	for (i = -1; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
