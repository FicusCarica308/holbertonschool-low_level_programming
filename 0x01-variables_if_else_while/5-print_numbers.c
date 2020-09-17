#include <stdio.h>

/**
 *main - prints out the numbers 0-0 using only putchar
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
