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
	listint_t *ptr;
	int data = 0;
	ptr = malloc(sizeof(listint_t));

	if (head == NULL) /* account for no linked list */
		return (0);

	if (*head != NULL)
	{	
		ptr = *head;
		data = ptr->n;
		*head = ptr->next;
		free(ptr);
	}

	return (data);
}
