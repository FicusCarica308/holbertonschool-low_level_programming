#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
#include <stdio.h>
/**
 *_putchar - This functions will print a given char
 *Return: returns the char
 *@c: This parameter holds whatever char the function is called with to be used
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_alphabet - This functions prints the alphabet
 *Return: returns nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
#endif
