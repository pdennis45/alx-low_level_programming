#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @i: - integer to be passd for checking
 * Return: absolute number, 0 otherwise.
 */

int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
