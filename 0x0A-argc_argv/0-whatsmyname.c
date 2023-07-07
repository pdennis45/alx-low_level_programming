#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 *@argc: size of argv array
 *@argv: array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
