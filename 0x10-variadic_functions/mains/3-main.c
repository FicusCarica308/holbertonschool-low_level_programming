#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'H', 0, "lberton");
	print_all("fcss", 3.56, 'f', "rodney", NULL);
	print_all("iiii", 5);
	print_all("cr", "h", 4, 'j');
	return (0);
}
