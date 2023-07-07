#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 *@argc: size of argv array
 *@argv: array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = 0;
	b = 0;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
