#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: Converted number or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted_number;

	converted_number = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		converted_number = 2 * converted_number + (b[i] - '0');
	}
	return (converted_number);
}
