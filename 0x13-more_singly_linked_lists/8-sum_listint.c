#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint- Function to sum list members
 * @head: existing list passed on
 *
 * Return: node
 *
 **/


int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL) /* account for no linked list */
		return (0);

	sum = 0;

	while (head)
	{
		tmp = head;
		sum += tmp->n;
		head = head->next;
	}

	return (sum);
}
