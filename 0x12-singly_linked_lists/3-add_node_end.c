#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: the first node
 * @str: the string to add to the node
 * Return: the address of the new element, or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptemp, *plist;

	if (str)
	{
		plist = malloc(sizeof(list_t));
		if (!plist)
			return (NULL);
		plist->str = strdup(str);
		plist->len = _strlen(str);
		plist->next = NULL;
		if (!(*head))
		{
			*head = plist;
			return (*head);
		}
		else
		{
			ptemp = *head;
			while (ptemp->next)
				ptemp = ptemp->next;
			ptemp->next = plist;
			return (ptemp);
		}
	}
	return (NULL);
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
