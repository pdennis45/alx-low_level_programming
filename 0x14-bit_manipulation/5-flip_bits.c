#include "main.h"

/**
* flip_bits - a function that returns the number of bits you would
* need to flip to get from one number to another.
* @n:number 1
* @m:number 2
* Return: Count of times to flip between the two numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int curr, xor;

	count = 0;
	xor = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		curr = xor >> i;
		if (curr & 1)
			count++;
	}
	return (count);
}
