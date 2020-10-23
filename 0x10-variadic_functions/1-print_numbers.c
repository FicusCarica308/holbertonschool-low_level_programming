#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - this function prints numbers
 *@n: # of integers passed to the program
 *@separator: is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	if (n > 0)
	{
	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	}
	printf("\n");
}
