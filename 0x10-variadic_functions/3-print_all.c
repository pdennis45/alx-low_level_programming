#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: a variable number of arguments to be printed
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *separator, *s;
	va_list arg_types;

	i = 0;
	separator = "";
	s = "";
	va_start(arg_types, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg_types, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(arg_types, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg_types, double));
					break;
				case 's':
					s = va_arg(arg_types, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
		printf("\n");
		va_end(arg_types);
}
