#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - returns a concatenated string
 *@s1: string1
 *@s2: string 2
 * Return: a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1, len2, length;

	len1 = 0;
	len2 = 0;
	length = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	length = len1 + len2;
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < length; i++)
	{
		if (i <= len1)
			s[i] = s1[i];
		if (i >= len1)
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[length] = '\0';
	return (s);
}
