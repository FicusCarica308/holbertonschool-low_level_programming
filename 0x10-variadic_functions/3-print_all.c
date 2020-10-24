#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_all - prints any given amount of arguments specified by a given format
 *@format: a string with a list of formats that represent data types c, i, f, s
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int count = 0;
	char *check;

	va_start(list, format);
	while (format[i] != '\0')
	{
		count = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			check = va_arg(list, char*);
			if (check == NULL)
			{
				printf("(nil)");
				break;
			}
				printf("%s", check);
			break;
		default:
			count = 1;
			break;
		}
		if (format[i + 1] != '\0' && count == 0)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
	}
}
