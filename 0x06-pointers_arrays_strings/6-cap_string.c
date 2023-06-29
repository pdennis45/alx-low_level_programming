#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase
 *@str: Pointer to char for the string
 * Return: Pointer to char for Capitalized words of a string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!((str[i] >= 'a') && (str[i] <= 'z')))
			i++;
		if (i == 0 || str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '(' ||
		str[i - 1] == ')' || str[i - 1] == '"' || str[i - 1] == '\t' ||
		str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == ',' ||
		str[i - 1] == '?' || str[i - 1] == '!' || str[i - 1] == ' ' ||
		str[i - 1] == '\n')
			str[i] -= 32;
		i++;
	}
	return (str);
}
