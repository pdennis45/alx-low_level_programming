#include "main.h"

/**
 * print_line - draws the straight line
 *@n: number of times character _ is printed
 * Return: Void
 */
void print_line(int n)
{

		if (n <= 0)
			_putchar('\n');
		else
		{
			int i;

			for (i = 0; i < n; i++)
				_putchar('_');
		_putchar('\n');
		}
}
