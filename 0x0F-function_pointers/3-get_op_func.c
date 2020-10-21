#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - will find which function to return depending on a given
 * operator
 *@s: this is the given operator character
 *Return: returns a pointer to the needed operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
