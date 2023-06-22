#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"

/**
 * positive_or_negative - prints whether integer is positive or negative
 *@i: integer to be checked
 * Return: Void
 */

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = i;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
}
