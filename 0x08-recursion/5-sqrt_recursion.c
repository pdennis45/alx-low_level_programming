#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: the number
 * Return: Integer of the square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - returns the natural square root of a number
 *@n: the number
 *@i: for number of recursions
 * Return: Integer of the square root of n
 */
int _sqrt(int n, int i)
{
	int product;

	product = i * i;
	if (product > n)
		return (-1);
	else if (product == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
