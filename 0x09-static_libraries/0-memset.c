#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *@s: pointer to char for the string
 *@b: constat byte
 *@n: first bytes of the memory area
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
