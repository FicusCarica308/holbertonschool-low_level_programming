#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);

/**
 *print_alphabet - This functions prints the alphabet
 *Return: returns nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}

/**
 *print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
	putchar('\n');
	}
}

/**
 * _islower - asdasd
 *Return:asd
 *@c:sad
 */
int _islower(int c)
{
	int i;
	int check = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			check++;
		}
	}
	if (check == 1)
	{
		return (1);
	} else
	{
		return (0);
	}
}
#endif
