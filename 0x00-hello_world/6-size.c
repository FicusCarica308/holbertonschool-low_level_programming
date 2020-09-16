#include<stdio.h>
/**
*main - This c script prints out the different variable types and there sizes
*Return: returns 0 when done
*/
int main(void)
{
	int charSz = sizeof(char);
	int intSz = sizeof(int);
	int longIntSz = sizeof(long);
	int dbleIntSz = sizeof(long long int);
	int floatSz = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charSz);
	printf("Size of a int: %d byte(s)\n", intSz);
	printf("Size of a long int: %d byte(s)\n", longIntSz);
	printf("Size of a long long int: %d byte(s)\n", dbleIntSz);
	printf("Size of a float: %d bytes(s)\n", floatSz);
	return (0);
}
