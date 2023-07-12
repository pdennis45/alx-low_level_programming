#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char.
 *@size: size of array
 *@c: character for the array elements
 * Return: NULL if size is 0 or pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
