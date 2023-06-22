#include "main.h"

/**
 * _isupper - checks if a character is upper case
 *@c: charact to be checked
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
