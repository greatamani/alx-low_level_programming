#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function to add node at the begining
 * @head: existing list passed on
 *  *
 * Return: Void
 *
 **/


void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL) /* account for no linked list */
		return;

	while (head != NULL) /* have ptr keep track of head node and free */
	{
		ptr = *head;
		*head = ptr->next; /* move to next node while ptr frees prior */
		free(ptr);
	}
}
