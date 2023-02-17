#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Function to reverse list members
 * @head: existing list passed on
 *
 * Return: a pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *nextNode;

	prevNode = NULL;
	nextNode = NULL;

	while (*head != NULL)
	{
		/* Store next*/
		nextNode = (*head)->next;

		/* Reverse current node's pointer*/
		(*head)->next = prevNode;

		/* Move pointers one position ahead.*/
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}
