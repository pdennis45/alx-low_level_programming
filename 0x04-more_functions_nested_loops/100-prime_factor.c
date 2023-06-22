#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, largest_prime_factor, num, square;

	num = 612852475143;
	square = sqrt(num);
	for (i = 1; i <= square; i++)
		if (num % i == 0)
			largest_prime_factor = num / i;
	printf("%ld\n", largest_prime_factor);
	return (0);
}
