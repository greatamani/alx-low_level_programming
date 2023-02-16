#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function to delete node at the begining
 * @head: existing list passed on
 *  *
 * Return: head node
 *
 **/


int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* account for no linked list */
		return (0);

	tmp = *head;

	data = tmp->n; /* save data to return later */

	*head = tmp->next; /* link head to next node */
	free(tmp);

	return (data);
}
