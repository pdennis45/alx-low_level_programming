#include "main.h"

/**
 * _memset - a function that copies memory area
 *@dest: pointer to char for the destination
 *@src: pointer to char for the source
 *@n: number of bytes
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
