#include <stdio.h>

/**
 *main - prints out the alphabet lowercase a-z using putchar and for loop
 *Without characters e or q
 *Return: returns 0 when done
 */

int main(void)
{
	char curChar;
	char charE = 'e';
	char charQ = 'q';

	for (curChar = 'a' ; curChar <= 'z' ; curChar++)
	{
		if (curChar != charE && curChar != charQ)
		{
		putchar(curChar);
		}
	}
	putchar('\n');
	return (0);
}
