#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *@str: pointer to char that creates the string
 * Return: Void
 */
void puts2(char *str)
{
	int i, count;

	count = 0;
	while (str[count] != '\0')
		count++;
	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
