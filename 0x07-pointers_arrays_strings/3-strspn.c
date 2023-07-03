#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
*@s: pointer to char for the string
*@accept: pointer to char for the substring
* Return: number of bytes integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count, flag, n;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (n = 0; accept[n] != '\0'; n++)
			if (accept[n] == s[i])
			{
				flag = 1;
				count++;
			}
		if (flag == 0)
			return (count);
	}
	return (count);
}
