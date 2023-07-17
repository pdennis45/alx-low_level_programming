#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* _strcpy - copies the string pointed to by src
*@src: pointer to char that contains the string to be copied
*@dest: pointer to char to which the string will be copied to
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
/**
* _strlen - a function that returns the length of a string
*@s: pointer to char that creates the string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (*s++)
	{
		str_len++;
	}
	return (str_len);
}

/**
* new_dog - a function that creates a new dog
*@name: Name of the new dog
*@age: Age of the new dog
*@owner: Owner of the new dog
*Return: The new dog on success, NULL on error
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	int len_name, len_owner;

	len_name = 0;
	len_owner = 0;
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);
	the_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (the_dog->name == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	the_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (the_dog->owner == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	_strcpy(the_dog->name, name);
	_strcpy(the_dog->owner, owner);
	the_dog->age = age;
	return (the_dog);
}
