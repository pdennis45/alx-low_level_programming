#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *@s: pointer to char for the string
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
		return (0);
}
