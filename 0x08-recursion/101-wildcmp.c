#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 *@s1: pointer to char for string 1
 *@s2: pointer to char for string 2
 * Return: 1 if the two strings are identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*(s2 + 1) != '\0') && (*s2 == '*'))
		return (0);
	else if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else
		return (0);
}
