#include "main.h"

/**
 * _islower - prints 1 if argument c is lower or 0 if not
 * @c: - character to be passd for checking
 * Return: 1 if c is lower, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
