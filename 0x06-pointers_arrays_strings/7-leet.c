#include "main.h"

/**
* leet - a function that encodes a string into 1337
*@str: a pointer to char for string to be encoded
* Return: a pointer to char for encoded string
*/
char *leet(char *str)
{
	int i, j;
	char *p1, *p2;

	p1 = "aAeEoOtTlL";
	p2 = "4433007711";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == p1[j])
				str[i] = p2[j];
	}
	return (str);
}
