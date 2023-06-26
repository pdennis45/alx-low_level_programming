#include "main.h"

/**
* puts_half - The function should print the second half of the string
*@str: pointer to char that creates the string
* Return: Void
*/
void puts_half(char *str)
{
	int i, n, count;

	count = 0;
	n = 0;
	while (str[count] != '\0')
		count++;
	if (count % 2 == 1)
		n = (count / 2) + 1;
	else
		n = count / 2;
	for (i = n; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
