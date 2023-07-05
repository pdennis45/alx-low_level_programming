#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *@s: pointer to char for the string
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *@s: pointer to char for the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (compare_str(s, 0, (_strlen_recursion(s) - 1)));
}
/**
 * compare_str - compares the charaters of th string
 *@s: pointer to char for the string
 *@i: iterator i
 *@j: iterator j
 * Return: Integer
 */
int compare_str(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if ((i == j) || (i == j + 1))
			return (1);
		else
			return (0 + compare_str(s, (i + 1), (j - 1)));
	}
	else
		return (0);
}
