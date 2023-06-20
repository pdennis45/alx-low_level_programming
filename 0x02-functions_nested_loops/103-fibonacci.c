#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;
	long prev1, prev2, nextTerm, sum;
	/** Initializing... */
	prev1 = 0;
	prev2 = 1;
	nextTerm = 0;
	n = 50;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		nextTerm = prev1 + prev2;
		prev1 = prev2;
		prev2 = nextTerm;
		if ((nextTerm % 2 == 0) && (nextTerm < 4000000))
			sum += nextTerm;
	}
	printf("%ld\n", sum);
	return (0);
}
