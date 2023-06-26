#include "main.h"

/**
 * _puts - a function that prints a string to stdout.
 *@str: pointer to char that creates the string
 * Return: Void
 */
void _puts(char *str)
{
	do {
		_putchar(*str);
	} while (*str++);
	_putchar('\n');
}
