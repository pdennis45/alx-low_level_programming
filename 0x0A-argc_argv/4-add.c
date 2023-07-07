#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 *@argc: size of argv array
 *@argv: array containing the program command line arguments
 * Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum, j;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; j < strlen(str); j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
