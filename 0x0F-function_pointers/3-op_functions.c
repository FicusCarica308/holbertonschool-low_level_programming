#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - adds two given integers
 *@a: given integer
 *@b: given integer
 *Return: returns the value of the expression once calculated
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two given integers
 *@a: given integer
 *@b: given integer
 *Return: returns the value of the expression once calculated
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two given integers
 *@a: given integer
 *@b: given integer
 *Return: returns the value of the expression once calculated
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two given integers
 *@a: given integer
 *@b: given integer
 *Return: returns the value of the expression once calculated
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - will find the remainder two given integers
 *@a: given integer
 *@b: given integer
 *Return: returns the value of the expression once calculated
 */
int op_mod(int a, int b)
{
	return (a % b);
}
