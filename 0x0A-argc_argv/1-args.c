#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *@argc: size of argv array
 *@argv: array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
