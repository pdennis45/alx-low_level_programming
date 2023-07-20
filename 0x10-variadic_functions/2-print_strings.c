#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 * @...: a variable number of arguments to be printed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char *);
			if (!(str))
				printf("nil");
			else
				printf("%s", str);
			if (i != (n - 1) && (separator))
				printf("%s", separator);
		}
	va_end(strings);
	}
	printf("\n");
}
