#include "main.h"

/**
 * print_number - prints an integer
 *@n: integer to be printed
 * Return: Void
 */
void print_number(int n)
{
	unsigned int temp;

	temp = n;
	if (n < 0)
	{
		n *= -1;
		temp = n;
		_putchar('-');
	}
	temp = temp / 10;
	if (temp != 0)
		print_number(temp);
	_putchar((unsigned int) n % 10 + '0');
}
