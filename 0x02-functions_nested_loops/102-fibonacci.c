#include <stdio.h>

/**
 * main - Entry point, prints the first 50 fibonacci sequence
 * beginning by 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, prev1, prev2, nextTerm, n;
	/** declare */
	prev1 = 0;
	prev2 = 1;
	nextTerm = 0;
	n = 50;
	for (i = 1; i <= n; i++)
	{
		nextTerm = prev1 + prev2;
		prev1 = prev2;
		prev2 = nextTerm;
		if (i < n)
			printf("%d, ", nextTerm);
		else
			printf("%d\n", nextTerm);
	}
	return (0);
}
