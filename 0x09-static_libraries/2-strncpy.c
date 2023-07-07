#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *@dest: destination string
 *@src: source string
 *@n: bytes from src
 * Return: A pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, str_len;

	str_len = 0;
	while (src[str_len])
		str_len++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = str_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
