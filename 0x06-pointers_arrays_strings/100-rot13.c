#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 *@s: pointer to char for the string
 * Return: pointer to char
 */
char *rot13(char *s)
{
	int i, j;
	char *p1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == p1[j])
			{
				s[i] = p2[j];
				break;
			}
		}
	}
	return (s);
}
