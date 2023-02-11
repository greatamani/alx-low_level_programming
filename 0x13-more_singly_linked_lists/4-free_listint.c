#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Function to add node at the begining
 * @head: existing list passed on
 *  *
 * Return: Void
 *
 **/


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		temp = head;
	}
}
