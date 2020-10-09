#include "holberton.h"
#include <stdio.h>

/**
 * _islower - asdasd
 *Return:asd
 *@c:sad
 */
int _islower(int c)
{
	int i;
	int check = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			check++;
		}
	}
	if (check == 1)
		return (1);

	return (0);
}
