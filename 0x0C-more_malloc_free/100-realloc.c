#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - this function reallocates a memory block using malloc and free
 *@ptr: a pointer to the memory previously allocated with a call to malloc
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 * Return: Null or New Pointer to char
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *s;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		s[i] = ((char *)ptr)[i];
	free(ptr);
	return (s);
}
