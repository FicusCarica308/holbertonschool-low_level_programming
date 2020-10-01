#include <stdio.h>
#include "holberton.h"
/**
 *string_toupper - changes lowercase letters to uppercase
 *@s: the string to be converted
 *Return: returns the string completed
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] >= 90)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
