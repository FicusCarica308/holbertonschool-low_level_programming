#include <stdio.h>
#include "holberton.h"

/**
 *_isalpha - this function tests a given character(checks if its not a number)
 *Return: Will return 1 if its a letter, and 0 if its otherwise
 *@c: This parameter holds the ascii value of whatever charater is input
 */
int _isalpha(int c)
{
	int i;
	int j;
	int check = 0;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			check++;
	}

	if (check == 0)
		for (j = 97; j <= 122; j++)
		{
			if (j == c)
				check++;
		}

	if (check == 1)
		return (1);

	return (0);
}
