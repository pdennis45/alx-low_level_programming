#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer of the duplicated string
 *@str: string to copy
 * Return: a copied string
 */
char *_strdup(char *str)
{
	char *s;
	int i, length;

	length = 0;
	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		s[i] = str[i];
	s[length] = '\0';
	return (s);
}
