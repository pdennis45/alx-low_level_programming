#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - addition function
* @a: first integer
* @b: second integer
* Return: Sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtraction function
* @a: first integer
* @b: second integer
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Multiplication function
* @a: first integer
* @b: second integer
* Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - division function
* @a: first integer
* @b: second integer
* Return: reuslt of the division of a and b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - modular function
* @a: first integer
* @b: second integer
* Return: reminder of division of a and b, otherwise Error
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
