#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *@a: pointer to integer array
 *@size: size
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2, size_squared;

	sum1 = 0;
	sum2 = 0;
	size_squared = size * size;
	for (i = 0; i <= size_squared; i = (i + size + 1))
		sum1 += a[i];
	for (j = size - 1; j <= size_squared - size; j = j + size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}
