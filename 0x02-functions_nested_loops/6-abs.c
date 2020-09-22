#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 */
int _abs(int num)
{
	if (num < 0)
		num = num * num;
	return num; 
}
