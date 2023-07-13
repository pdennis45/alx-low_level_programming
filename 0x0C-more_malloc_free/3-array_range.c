#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *@min: minimum
 *@max: maximum
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *arr;

	i = 0;
	if (min > max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
