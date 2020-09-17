#include <stdio.h>

/**
 *main - prints out the alphabet lowercase and upercase a-z using putchar and
 *for loop
 *Return: returns 0 when done
 */

int main(void)
{
	char curChar;

	for (curChar = 'a' ; curChar <= 'z' ; curChar++)
	{
		putchar(curChar);
	}
	for (curChar = 'A' ; curChar <= 'Z' ; curChar++)
	{
		putchar(curChar);
	}
	putchar('\n');
	return (0);
}
