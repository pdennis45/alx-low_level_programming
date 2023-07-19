#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: The array
 * @size: size of the array
 * @action: a pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
