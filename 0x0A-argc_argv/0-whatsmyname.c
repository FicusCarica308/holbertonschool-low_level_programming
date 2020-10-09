#include <stdio.h>
/**
 *main - will print out the name of the executable using argv[]
 *@argc: the amount of arguments passed to the file
 *@argv: strings of each argument
 *Return: 0 after completion
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
