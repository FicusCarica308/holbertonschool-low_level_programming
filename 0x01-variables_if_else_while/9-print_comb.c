#include <stdio.h>

/**
 *main - prints out the number 0-9 using only putchar and no char var's
 *with comas and spaces following each one (max 4 putchar's)
 *Without characters e or q
 *Return: returns 0 when done
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
