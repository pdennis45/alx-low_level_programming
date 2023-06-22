#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: size of the triangle
 * Return: Void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
