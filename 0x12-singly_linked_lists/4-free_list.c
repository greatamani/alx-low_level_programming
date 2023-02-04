#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Adds new node at the beginning of a list head
 * @head: The list_t list
 * Return: Void
 **/

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
