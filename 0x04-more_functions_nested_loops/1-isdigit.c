#include <stdio.h>
#inlcude "holberton.b"
/**
 *_isdigit - checks a given character if its a digit from 0 to 9
 *Return: returns 1 if it is a digit and 0 otherwise
 *@c: the given character to be checked
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (c == i)
			return (1);
	return (0);
}
