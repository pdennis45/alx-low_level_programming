#include "main.h"
#include <stdio.h>

/**
 * set_string - a function that sets the value of a pointer to a char
 *@s: double pointer to char
 *@to: pointer to char
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
