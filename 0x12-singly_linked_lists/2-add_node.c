#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str: the string to add to the node
 * Return: the address of the new element, or NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptemp;

	if (head && str)
	{
		ptemp = malloc(sizeof(list_t));
		if (!ptemp)
			return (NULL);
		ptemp->str = strdup(str);
		ptemp->len = _strlen(str);
		ptemp->next = *head;
		*head = ptemp;
		return (ptemp);
	}
	return (0);
}

/**
* _strlen - a function that returns the length of a string
*@s: pointer to char that creates the string
* Return: the length of the string
*/
int _strlen(const char *s)
{
	int str_len = 0;

	while (*s++)
		str_len++;
	return (str_len);
}
