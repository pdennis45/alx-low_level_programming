#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *@nmemb: number of array elements
 *@size: size of bytes
 * Return: Null or Array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, k;
	char *a;

	i = 0;
	k = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	k = nmemb * size;
	a = malloc(k);
	if (a == NULL)
		return (NULL);
	while (i < k)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
