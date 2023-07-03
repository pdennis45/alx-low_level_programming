#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *@a: pointer to char for the array
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, count;

	for (i = 0; i < 8; i++)
	{
		for (count = 0; count < 8; count++)
			_putchar(a[i][count]);
	_putchar('\n');
	}
}
