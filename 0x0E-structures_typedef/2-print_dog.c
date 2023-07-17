#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *@d: A dog type struture whose details will be printed
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
