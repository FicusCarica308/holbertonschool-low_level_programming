#include <stdio.h>
#include "holberton.h"
/**
 *_isupper - checks if the given character is a uppercase letter
 *Return: returns 1 if uppercase and 0 if its anything else
 *@c: The character that is given to the function that needs to be checked
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
