#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *@n: the interger number
 * Return: Integer 1 for prime number or otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - checks whether a number is a a prime number
 *@n: number
 *@r: recursive times
 * Return: Integer
 */
int is_prime(int n, int r)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else if ((n % r == 0) && (r > 1))
		return (0);
	else if ((n / r) < r)
		return (1);
	else
		return (is_prime(n, r + 1));
}
