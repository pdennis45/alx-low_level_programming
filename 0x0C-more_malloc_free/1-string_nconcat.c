#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *@n: First bytes size of second string
 * Return: Pointer to char for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, length;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	length = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		length = len1 + len2;
	else
		length = len1 + n;
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
		return (NULL);
	while (i < length)
	{
		if (i <= len1)
			s[i] = s1[i];
		if (i >= len1)
		{
			s[i] = s2[j];
			j++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
