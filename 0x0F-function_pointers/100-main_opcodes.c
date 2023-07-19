#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argv: array containing the program command line arguments
 * @argc: size of argv array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, number_of_bytes;
	int (*ptrfunc)(int, char**);
	unsigned char opcode;

	ptrfunc = main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number_of_bytes; i++)
	{
		opcode = *(unsigned char *)ptrfunc;
		printf("%.2x", opcode);
		if (i == (number_of_bytes - 1))
			continue;
		printf(" ");
		ptrfunc++;
	}
	printf("\n");
	return (0);
}
