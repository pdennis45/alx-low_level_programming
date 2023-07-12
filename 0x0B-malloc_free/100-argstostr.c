#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 *@ac: size
 *@av: array
 * Return: A pointer to char for the concatenated arguments of a program
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);
	char *s;
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			l++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * l) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
