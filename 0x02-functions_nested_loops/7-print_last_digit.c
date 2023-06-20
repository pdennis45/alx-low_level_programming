#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: - number to be passed for checking
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	i %= 10;
	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
