#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 *@haystack: pointer to char for the string
 *@needle: pointer to char for the substring
 * Return: the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
	}
	return (NULL);
}
