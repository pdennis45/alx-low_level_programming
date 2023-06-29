#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *@dest: pointer to char for the string destination
 *@src: the source string
 * Return: Concatened String
 */
char *_strcat(char *dest, char *src)
{
	int i, str_length;

	str_length = 0;
	while (dest[str_length] != '\0')
		str_length++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[str_length] = src[i];
		str_length++;
	}
	dest[str_length] = '\0';
	return (dest);
}
