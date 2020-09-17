#include <stdio.h>

/**
 *main - prints out the alphabet lowercase a-z using putchar and for loop
 *Return: returns 0 when done
 */

int main(void)
{
	char curChar;

	for (curChar = 'a' ; curChar <= 'z' ; curChar++)
	{
		putchar(curChar);
	}
	putchar('\n');
	return (0);
}
