#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the first node of the linked list
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *ptemp;

	while (head)
	{
		ptemp = head;
		head = head->next;
		free(ptemp->str);
		free(ptemp);
	}
	free(head);
}
