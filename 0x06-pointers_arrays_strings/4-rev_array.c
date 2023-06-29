#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *@a: array of integers
 *@n: number of elements of the array a
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, temp, len;

	len = n - 1;
	for (i = len; i >= (n / 2); i--)
	{
		temp = a[len - i];
		a[len - i] = a[i];
		a[i] = temp;
	}
}
