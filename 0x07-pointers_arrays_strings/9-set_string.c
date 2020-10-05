#include <stdio.h>
#include "holberton.h"
/**
 *set_string - sets a value of a pointer to a char
 *@s: our pointer value
 *@to: the value being replaced
 */
void set_string(char **s, char *to)
{
	*s = to;
}
