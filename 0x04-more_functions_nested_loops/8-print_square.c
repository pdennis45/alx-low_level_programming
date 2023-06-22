#include "main.h"

/**
 * print_square - draws a square
 *@size: size of the square
 * Return: Void
 */
void print_square(int size)
{

		if (size <= 0)
			_putchar('\n');
		else
		{
			int i, j;

			for (i = 0; i < size; i++)
			{
				for (j = 1; j < size; j++)
				_putchar(35);
			_putchar(35);
			_putchar('\n');
			}
		}
}
