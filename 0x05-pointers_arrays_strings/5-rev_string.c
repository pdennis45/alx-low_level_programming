#include "main.h"

/**
 * rev_string - a function tha reverses a string.
 *@s: pointer to char that creates the string
 * Return: Void
 */
void rev_string(char *s)
{
	char temp;
	int len, i, right;

	len = 0;
	while (s[len] != '\0')
		len++;
	right = len - 1;
	for (i = right; i >= (len / 2); i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
