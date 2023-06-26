#include "main.h"

/**
 * _atoi - converts a string to an integer
 *@s: pointer to char for the string to be converted
 * Return: Integer
 */
int _atoi(char *s)
{
	int i, min, checkInteger;
	unsigned int temp;

	i = 0;
	min = 1;
	checkInteger = 0;
	temp = 0;
	while (s[i])
	{
		if (s[i] == 45)
			min *= -1;
		while ((s[i] >= 48) && (s[i] <= 57))
		{
			checkInteger = 1;
			temp = (temp * 10) + (s[i] - '0');
			i++;
		}
		if (checkInteger == 1)
			break;
		i++;
	}
	temp *= min;
	return (temp);
}
