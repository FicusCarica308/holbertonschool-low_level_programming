#include <stdio.h>

/**
 *main - prints out the alphabet lowercase a-z using putchar and for loop
 *Without characters e or q
 *Return: returns 0 when done
 */

int main(void)
{
	char curChar;

	for (curChar = '0' ; curChar <= '9' ; curChar++)
	{
		putchar(curChar);
	}
	putchar('\n');
	return (0);
}
