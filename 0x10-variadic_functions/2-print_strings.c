#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_strings - this function prints a varible number of strings
 *@separator: the string that will seperate each given string
 *@n: the number of arguments passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *check;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 1; i <= n; i++)
		{
			check = va_arg(list, char*);
			if (check == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", check);
			}
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
		printf("\n");
	}
}
