#include "main.h"

/**
 * _strncat - concatenates two strings.
 *@dest: destination string
 *@src: source string
 *@n: bytes from src
 * Return: A pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_str_len;

	dest_str_len = 0;
	while (dest[dest_str_len] != '\0')
		dest_str_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_str_len++] = src[i];
	return (dest);
}
