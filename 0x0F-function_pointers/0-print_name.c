#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - uses a function pointer to print out a persons name using
 *another function
 *@name: the name that will be sent to the next function using a callback
 *@f: the pointer to out function to be called
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
	else
		f("");
}
