#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *@s: pointer to char that creates the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (*s++)
	{
		str_len++;
/*	*(s)++; */
	}
	return (str_len);
}
