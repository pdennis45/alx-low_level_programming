#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *@x: number x
 *@y: number y
 * Return: Integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
