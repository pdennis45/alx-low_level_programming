#include <stdio.h>

void vamos(void) __attribute__ ((constructor));

/**
* vamos - a function that prints below before the main
* function gets executed
* Return: Void.
*/
void vamos(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
