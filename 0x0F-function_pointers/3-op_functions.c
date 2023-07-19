#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* get_op_func - function that selects the correct
* function to perform the operation asked by the user.
* @s: the operator passed as argument to the program
* Return: a pointer to the function that corresponds to the operator
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i, count;

	count = 5;
	for (i = 0; i < count; i++)
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	return (0);
}
