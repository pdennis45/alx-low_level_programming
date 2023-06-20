#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case and takes no argument
 * Return: Void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
